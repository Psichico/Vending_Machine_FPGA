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
	wire [11:0] BCD1;
	wire [11:0] BCD2;
	wire clk;
	wire reset;
	
	reg [7:0]view_price;
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
	reg product_taken;
	reg [7:0]entered_amount_2;
	reg [7:0]entered_amount_5;
	reg [7:0]entered_amount_10;
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
	
	binary2bcd   B2D1(.binary({4'b0000,debounced}), .h(BCD1[11:8]), .t(BCD1[7:4]), .o(BCD1[3:0]));
	seven_segment segment0(BCD1[3:0],D0);
	seven_segment segment1(BCD1[7:4],D1);
	seven_segment segment2(BCD1[11:8],D2);
	
	/*
	keypad_count key2(.clk(clk), .reset(reset), .row(row), .key_value_count(key_value_count));
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
	
	//multiply mult(.out(mult_variable), .x(view_price), .y(view_quantity));
	
	
	always @(state)
	begin
			//state = s0;
			
			case (state)
			
				s0: //reset state
				begin
					
					display_state = 8'h00;
					view_price = 8'h00;
					view_quantity = 8'h00; 
					view_price_q = 8'h00;
					entered_amount = 8'h00;
					product_select = 0;
					entered_amount_2=8'h00;
					entered_amount_5=8'h00;
					entered_amount_10=8'h00;
					
					if(reset != 0 && debounced == 4'hF)
					begin
						display_this = 8'h00;
						nstate = s1;			
					end
					
					else
						nstate = s0;
						
				end
			
				s1: //select product state
				begin 
					
					display_state = 8'h01;
					product_select = 0;
					
					case(debounced)
							
							4'h1 : 
							begin
							product_select = 1; //product_chips
							view_price = 8'b0000_0110; //product chips $6
							end
							
							4'h2 :
							begin
							product_select = 1; // product_coke
							view_price = 8'b0000_1010; // product_coke $10
							end
							
							4'h3 :
							begin
							product_select = 1; //product_cookie
							view_price = 8'b0000_0101; //product_cookie $5
							end
							
							4'h4 :
							begin
							product_select = 1; //product_icecream
							view_price = 8'b0000_0010; //product_icecream $2
							end
							
							4'h5 :
							begin
							product_select =1; //product_coffee
							view_price = 8'b0000_0001; //product_coffee $1
							end
											
					endcase
					
					display_this = debounced;
					if(product_select == 1)
					begin
						
						nstate = s2;
					end
					
					else if(reset==0)
						nstate = s0;
						
					else
						nstate = s1;
					
				end

				s2: // view price
				begin
					display_state = 8'h02;
					
					if (debounced == 4'hF) //if okay button pressed
						nstate = s3;
					
					else if(reset == 0)
						nstate = s0;
					
					else
						nstate = s2;
				end
				
				s3: // select qunatity state
				begin
					
					display_state = 8'h03;
					view_quantity = {4'b0000,count};//view_quantity + 8'h01;
					display_this = debounced;
									
					if (debounced == 4'hF) ///next state button
						nstate = s4;
					
					else if(reset==0) //keep back button here
						nstate = s0;
					else
						nstate = s3;
						
				end

				s4: // confirm selection
				begin
					display_state = 8'h04;
					
					if(view_quantity == 8'h00)
						view_price_q = view_price;
					else if (view_quantity == 8'h01)
						view_price_q = view_price;
					else if (view_quantity == 8'h02)
						view_price_q = view_price + view_price;
					else if (view_quantity == 8'h03)
						view_price_q = view_price + view_price + view_price;
						
					else
					begin
						view_price_q = view_price_q;
					end
					
					
					
					
//					case (view_quantity)
//					
//						8'h00: view_price_q = view_price;
//						8'h01:  view_price_q = view_price;
//						8'h02:  view_price_q = view_price + view_price;
//						//8'h03:  view_price_q = view_price + view_price + view_price;
//						default : view_price_q = view_price_q;
//					
//					endcase
//					
						
					display_this = debounced;// + 8'h01;
					
					if(debounced == 4'hE) //confirm price
						begin
						entered_amount = 8'h00;
						nstate = s5;
						end
						
					else if(reset==0)
						nstate = s0;
						
					else
						nstate = s4;
				end
				
				s5: // Enter amount
				begin 
					display_state = 8'h05;
					//display_this = entered_amount;
					display_this = debounced;// {4'b0000,count};
//				/*	
//					if(debounced == 4'h8 && entered_amount <= view_price_q)
//					begin
//						entered_amount = entered_amount + 8'h01;
//					end
//					
//					else if(debounced == 4'h9 && entered_amount <= view_price_q)
//					begin
//						entered_amount = entered_amount + 8'h05;
//					end
//					
//					else if(debounced == 4'hA && entered_amount <= view_price_q)
//					begin
//						entered_amount = entered_amount + 8'hA;
//					end
//					
//					
//					
//					if (entered_amount >= view_price_q && debounced == 4'hF)
//					begin
//						//entered_amount = 8'h00;
//						nstate = s6;
//					end
//					
					if (reset==0)
						nstate = s0;
						
				
					else
						nstate = s5;
						
				end
				
				s6: 
				begin
					
					display_state = 8'h06;
					
					if (debounced == 4'hD)
					begin
						product_taken = 1;
						display_this = 8'h90;
						nstate = s0;
					end
					
					else
						nstate = s6;
				end
				
				default : state = s0; 
		
			endcase
	end
	
*/

endmodule



