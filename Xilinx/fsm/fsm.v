module fsm(clk, reset, c, r,view_price, view_quantity, view_price_q, entered_amount);
	input clk, reset;
	input  [3:0]c;
	input  [3:0]r;
	
	output reg view_price,view_quantity, view_price_q,entered_amount;

	reg [2:0]state,nstate;
	parameter s0 = 3'b000;
	parameter s1 = 3'b001;
	parameter s2 = 3'b010;
	parameter s3 = 3'b011;
	parameter s4 = 3'b100;
	parameter s5 = 3'b101;
	parameter s6 = 3'b110; 
	reg product_select, entered_amount_2, entered_amount_5, entered_amount_10, product_taken;
	
	reg count = 0;

	always @(posedge clk or negedge reset)
	begin
		if(!reset)
		state <= s0;
		else 
		state <= nstate;
	end

	always @(posedge clk or negedge reset)
	begin
		case (state)
			s0: //reset state
			begin
				if(c[3] == 0 && r[3] == 0) //start button
				nstate = s1;
				else 
				nstate = s0;
			end

			s1: //select product state
			begin 
				if (c[0] == 0 && r[0] == 0)
				begin
					product_select = 1; //product_chips
					view_price = 8'h0F; //product chips $15
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
				else
					nstate = s0;
			end

			s2: // view price
			begin
				if (view_price != 8'h00)
					nstate = s3;
				else 
					nstate = s1;
			end

			s3: // select qunatity state
			begin 
				if(c[1] == 0 && r[1] == 0)
					view_quantity = count;

				if (c[1] == 0 && r[2] == 0)
					nstate = s4;
				else 
					nstate = s1;
				end

			s4: // confirm selection
			begin
				view_price_q = view_quantity*view_price;
				if(c[1] == 0 && r[3] == 0)
					nstate = s5;
				else
					nstate = s1;
			end

			s5: // Enter amount
			begin 
				if (c[2] == 0 && r[0] ==0) 
					entered_amount_2 = count*2;
				if (c[2] == 0 && r[1] ==0)
					entered_amount_5 = count*5;
				if (c[2] == 0 && r[2] ==0)
					entered_amount_10 = count*10 ;

				entered_amount = entered_amount_2 + entered_amount_5 + entered_amount_10;

				if (entered_amount == view_price_q)
					nstate = s6;
				else
					nstate = s1;
				end

			s6: 
			begin
				if (c[2] == 0 && r[3] == 0)
					product_taken = 1;
					nstate = s0; 
				end

			default : state = s0; 
		endcase
		end
endmodule
