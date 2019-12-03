module vending_machine(clk , reset, row, D0, D1, D2, shift_col);

	input clk,reset; 
	input [3:0] row;

	output [6:0] D0,D1,D2;
	
	output [3:0] shift_col;
	
	wire [3:0] shift_col;
	wire [3:0] key_value;
	
	wire [3:0] debounced;
	
	wire [7:0] count;
	
	wire [11:0] BCD1;
	wire [11:0] BCD2;
	
	wire clk;
	wire reset;
	
	wire [3:0] row_reg;
	wire [3:0] col_reg;
		
	wire  [3:0]c ;
	wire [3:0]r ;
	
	reg [7:0]view_price;
	reg [7:0]view_quantity; 
	reg [7:0]view_price_q;
	reg [7:0]entered_amount;



	
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
	
	reg [7:0]entered_amount_2=0;
	reg [7:0]entered_amount_5=0;
	reg [7:0]entered_amount_10=0;
	
	
	always @(posedge clk or negedge reset)
		begin
			if(reset==0)
			begin
				state <= s0;
			//	count <= 0;
	//			view_price <= 0;
	//			view_quantity <= 0; 
	//			view_price_q <= 0;
	//			entered_amount <= 0;
			end
			
			else 
				state <= nstate;
	end

		
		
	keypad key(.clk(clk), .reset(reset), .row(row), .shift_col(shift_col) , .key_value(key_value), .row_reg(r), .col_reg(c));

	/////////
	debounce4bit bits(.button(key_value), .clk(clk), .reset(reset), .debounced(debounced));
	counter sum(.button(debounced), .clk(clk), .reset(reset), .count(count));
	
	binary2bcd   B2D1(.binary(view_price), .h(BCD1[11:8]), .t(BCD1[7:4]), .o(BCD1[3:0]));
	seven_segment segment0(BCD1[3:0],D0);
	seven_segment segment1(BCD1[7:4],D1);
	seven_segment segment2(BCD1[3:0],D2);
	
//	binary2bcd   B2D2(.binary(view_quantity), .h(BCD2[11:8]), .t(BCD2[7:4]), .o(BCD2[3:0]));
//	seven_segment segment3(BCD2[3:0],D0);
//	seven_segment segment4(BCD2[7:4],D1);
//	seven_segment segment5(BCD2[3:0],D2);
	
	
	
	
	always @(posedge clk or negedge reset)
		begin
			case (state)
			
			s0: //reset state
			begin
				//if(c == 4'b0111 && r == 4'b0111) //start button
				if(key_value == 4'h1)
					nstate = s1;
				else if(reset==0)
					begin
					nstate = s0;
					view_price = 0;
					view_quantity = 0; 
					view_price_q = 0;
					entered_amount = 0;
					end
					
			end
			
			s1: //select product state
			begin 
			
				if (c == 4'b1110 && r == 4'b1110)
				begin
					product_select = 1; //product_chips
					view_price = 8'h9; //product chips $15
				end
			
			
				else if(c[0] == 0 && r[1] ==0)
				begin
					product_select = 1; // product_coke
					view_price = 8'h0C; // product_coke $12
				end
				
				else if(c[0] == 0 && r[2] ==0)
				begin
					product_select = 1; //product_cookie
					view_price = 8'h0A; //product_cookie $10 
				end
				
				else if (c[0] == 0 && r[3] == 0)
				begin
					product_select = 1; //product_icecream
					view_price = 8'h08; //product_icecream $5
				end

				else if (c[1] ==0 && r[0] ==0)
				begin
					product_select =1; //product_coffee
					view_price = 8'h02; //product_coffee $2
				end

				else 
					product_select = 0;
				
				if(product_select == 1)
					nstate = s2;
				else if(!reset)
					nstate = s0;
				
			end

			s2: // view price
			begin
				if (view_price != 8'h00)
					nstate = s3;
				else if(!reset)
					nstate = s1;
			end
			
			s3: // select qunatity state
			begin 
				view_quantity = count;

				if (c[1] == 0 && r[2] == 0)
					nstate = s4;
				
				else if(!reset)
					nstate = s1;		
			end

			s4: // confirm selection
			begin
				
				view_price_q = view_quantity*view_price;
				
				if(c[1] == 0 && r[3] == 0) //confirm price
					nstate = s5;
				
				else if(!reset)
					nstate = s1;
			end
			
			s5: // Enter amount
			begin 
				
				if (c[2] == 0 && r[0] ==0) 
					entered_amount_2 = count*2;
				else	if (c[2] == 0 && r[1] ==0)
					entered_amount_5 = count*5;
				else	if (c[2] == 0 && r[2] ==0)
					entered_amount_10 = count*10 ;

				entered_amount = entered_amount_2 + entered_amount_5 + entered_amount_10;

				if (entered_amount == view_price_q)
					nstate = s6;
				else if (!reset)
					nstate = s1;
			end
			
			s6: 
			begin
				if (c[2] == 0 && r[3] == 0)
				begin
					product_taken = 1;
					nstate = s0;
				end
			end
			
			default : state = s0; 
		
			endcase
			end
			

	
	
endmodule
