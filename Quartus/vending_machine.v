
module vending_machine(clk , reset, row, D0, D1, D2,D3,D4,D5, shift_col);

	input clk,reset; 
	input [3:0] row;

	output [6:0] D0,D1,D2;
	output [6:0] D3,D4,D5;
	output [3:0] shift_col;
	
	wire [3:0] shift_col;
	wire [3:0] key_value;
	wire [3:0] key_value_count;
	
	wire [3:0] debounced;
	wire [3:0] debounced2;
	wire [3:0] count;
	wire [3:0] count1;
	wire [3:0] count2;
	wire [3:0] count3;
	wire [11:0] BCD1;
	wire [11:0] BCD2;
	wire clk;
	wire reset;
	
	reg [7:0] view_price;
	reg [7:0]view_quantity; 
	reg [7:0]view_price_q;
	reg [7:0]entered_amount;//= 8'h00;
	reg [7:0] display_this;
	reg [7:0] display_state;

	parameter s0 = 3'b000;
	parameter s1 = 3'b001;
	parameter s2 = 3'b010;
	parameter s3 = 3'b011;
	parameter s4 = 3'b100;
	parameter s5 = 3'b101;
	parameter s6 = 3'b110;

	reg [2:0]state = s0;
	reg [2:0]nstate;	
	reg product_select;
	
	//reg [3:0] count;
	
	
	always @(posedge clk or negedge reset)
	begin
			if(reset==0)
				state <= s0;
			
			else 
				state <= nstate;
	end

		
		
	keypad key1(.clk(clk), .reset(reset), .row(row), .shift_col(shift_col) , .key_value(key_value));

	debounce4bit bits1(.button(key_value), .clk(clk), .reset(reset), .debounced(debounced));
	
	keypad_count key2(.clk(clk), .reset(reset), .row(row), .key_value_count(key_value_count));//, .key_value_count_1(key_value_count_1), .key_value_count_2(key_value_count_2), .key_value_count_3(key_value_count_3));
	debounce4bit bits2(.button(key_value_count), .clk(clk), .reset(reset), .debounced(debounced2));
	counter sum(.button(debounced2), .clk(clk), .reset(reset), .count(count));
	
	binary2bcd   B2D1(.binary(display_this), .h(BCD1[11:8]), .t(BCD1[7:4]), .o(BCD1[3:0]));
	seven_segment segment0(BCD1[3:0],D0);
	seven_segment segment1(BCD1[7:4],D1);
	seven_segment segment2(BCD1[11:8],D2);
	
	binary2bcd   B2D2(.binary(display_state), .h(BCD2[11:8]), .t(BCD2[7:4]), .o(BCD2[3:0]));
	seven_segment segment3(BCD2[3:0],D5);
	seven_segment segment4(BCD2[7:4],D4);
	seven_segment segment5(BCD2[11:8],D3);
	
	//assign debounced1 = debounced;
	
	always @ (*)
	begin
			//state = s0;
			
			case (state)
			
				s0: //reset state
				begin
					
					if(reset != 0 && debounced == 4'hF)
					begin
						display_this = 8'h00;
						nstate = s1;			
					end
					
					else
					begin
						display_state = 8'h00;
						view_price = 8'h00;
						view_quantity = 8'h00; 
						view_price_q = 8'h00;
						entered_amount = 8'h00;
						product_select = 0;
						nstate = s0;
					end
					
				end
			
				s1: //select product state
				begin 
					if(reset!=0)
					begin
						
						display_state = 8'h01;
						product_select = 0;
						
						if(debounced == 4'h1)
						begin
							product_select = 1; //product_chips
							view_price = 8'h06; //product chips $6
						end
						
						else if(debounced == 4'h2)
						begin
							product_select = 1; //product_chips
							view_price = 8'h0A; //product chips $6
						end
						
						else if(debounced == 4'h3)
						begin
							product_select = 1; //product_chips
							view_price = 8'h05; //product chips $6
						end
						
						else if(debounced == 4'h4)
						begin
							product_select = 1; //product_chips
							view_price = 8'h02; //product chips $6
						end
						
						else if(debounced == 4'h5)
						begin
							product_select = 1; //product_chips
							view_price = 8'h01; //product chips $6
						end
						
						//else
						//display_this = view_price;
						
						if(product_select == 1)
						begin
							display_this = view_price;
							nstate = s2;
						end	
						
						else
							nstate = s1;
						
					end
					
					else
						nstate = s0;
						
						
				end

				s2: // view price
				begin
					
					if (reset!=0)
					begin
						
						display_state = 8'h02;
						
						
						if (debounced == 4'hE) //if okay button pressed
							nstate = s3;
						
						else
							nstate = s2;
					end
					
					else
						nstate = s0;
					
				end
				
				s3: // select qunatity state
				begin
				
					if(reset!=0)
					begin
						display_state = 8'h03;
						
						view_quantity = {4'b0000,count};//view_quantity + 8'h01;
						
						display_this = view_quantity;
										
						if (debounced == 4'hF) ///next state button
						begin	
							//view_price_q = 8'h00;
							nstate = s4;
						end
						
						else
							nstate = s3;
					end
					
					else
						nstate = s0;
					
				end

				s4: // confirm selection
				begin
				
					if(reset!=0)
					begin
						display_state = 8'h04;
						
						//if (view_quantity == {4'b0000,count})
						//view_price_q = view_price * {4'b0000,count};
						/*
						if(view_quantity == 8'h00)
						begin
							view_price_q = view_price;
						end
						else if (view_quantity == 8'h01)
						begin
							view_price_q = view_price;
						end
						else if (view_quantity == 8'h02)
						begin
							view_price_q = view_price + view_price;
						end
						else if (view_quantity == 8'h03)
						begin
							view_price_q = view_price + view_price + view_price;
						end
						*/
						view_price_q = 8'h06;
						display_this = view_price_q;											
						entered_amount = 8'b00;
					end	
					
					if(debounced == 4'hE) //confirm price
							nstate = s5;
						
					else
							nstate = s4;
					
					if (reset==0)
						nstate = s0;
						
				end
				
				s5: // Enter amount
				begin 
					if(reset!=0)
					begin
						
						display_state = 8'h05;
						
						/*
						if(debounced == 4'h8)
						begin
							entered_amount = entered_amount + 8'h01;
						end
						
						else if(debounced == 4'h9)
						begin
							entered_amount = entered_amount + 8'h05;
						end
						
						else if(debounced == 4'hA)
						begin
							entered_amount = entered_amount + 8'hA;
						end
						*/
						if(debounced == 4'h8)
						begin
							display_this = 8'h01;
						end
						
						else if(debounced == 4'h9)
						begin
							display_this = 8'h05;
						end
						
						else if(debounced == 4'hA)
						begin
							display_this = 8'hA;
						end
						
						entered_amount = 8'h06;
						
						if (entered_amount >= view_price_q && debounced == 4'hF)
						begin
							display_this = 8'h00;
							nstate = s6;
						end
						
						else
						begin
							nstate = s5;
						end
						
					end
					
					
					else
						nstate = s0;
						
				end
				
				s6: 
				begin
					if(reset!=0)
					begin
						
						display_state = 8'h06;
						
						if (debounced == 4'hD)
						begin
							display_this = 8'h00;
							nstate = s0;
						end
						
						else
							nstate = s6;
					end
					
					else
						nstate = s0;
					
				end
				
				default : state = s0; 
		
			endcase
	end
	


endmodule



