module vending_machine (clk, reset, row, D0, D1, D2,D3,D4,D5, shift_col);

	input clk,reset; 
	input [3:0] row;
	
	wire [3:0] row;
	
	output [6:0] D0,D1,D2;
	output [6:0] D3,D4,D5;
	input [3:0] shift_col; //uncomment this when not using test bench
	//output [3:0] shift_col; //comment this for using testbench
	
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
	reg product_taken;
	
	
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
	counter sum(.button(debounced2), .clk(clk), .reset(reset), .count(count));//,.product_taken(product_taken));
	
	binary2bcd   B2D1(.binary(display_this), .h(BCD1[11:8]), .t(BCD1[7:4]), .o(BCD1[3:0]));
	seven_segment segment0(BCD1[3:0],D0);
	seven_segment segment1(BCD1[7:4],D1);
	seven_segment segment2(BCD1[11:8],D2);
	
	binary2bcd   B2D2(.binary(display_state), .h(BCD2[11:8]), .t(BCD2[7:4]), .o(BCD2[3:0]));
	seven_segment segment3(BCD2[3:0],D5);
	seven_segment segment4(BCD2[7:4],D4);
	seven_segment segment5(BCD2[11:8],D3);

	
	always @ (*)
	begin
			
			
			case (state)
			
				s0: //reset state
				begin
					
					if(reset != 0 && debounced == 4'hF) //if okay button is pressed
					begin
						display_this = 8'h00;
						nstate = s1;			
					end
					
					else // reset everything
					begin
						product_taken = 0;
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
						
						if(debounced == 4'h1) //press 1
						begin
							product_select = 1; //product_chips
							view_price = 8'h06; //product chips $6
						end
						
						else if(debounced == 4'h2) //press 2
						begin
							product_select = 1; //product_chocolate
							view_price = 8'h0A; //product chocolate $10
						end
						
						else if(debounced == 4'h3) //press 3
						begin
							product_select = 1; //product_coke
							view_price = 8'h05; //product coke $5
						end
						
						else if(debounced == 4'h4) //press 4
						begin
							product_select = 1; //product_coffee
							view_price = 8'h02; //product coffee $2
						end
						
						else if(debounced == 4'h5) //press 5
						begin
							product_select = 1; //product_candy
							view_price = 8'h01; //product candy $1
						end
												
						if(product_select == 1) // if product selected
						begin
							display_this = view_price;// display the price;
							nstate = s2;
						end	
						
						else //stay in state s1
							nstate = s1;
						
					end
					
					else //go to s0 if reset is pressed
						nstate = s0;
						
						
				end

				s2: // view and confirm price
				begin
					
					if (reset!=0)
					begin
						
						display_state = 8'h02;
						
						if (debounced == 4'hF) //if okay button pressed
							nstate = s3;
						
						else //stay in state s2
							nstate = s2;
					end
					
					else //go to state s0 if reset is pressed
						nstate = s0;
					
				end
				
				s3: // select quantity state
				begin
				
					if(reset!=0)
					begin
						display_state = 8'h03;
						
						view_quantity = {4'b0000,count}; //count button is 12th button on keypad
						
						display_this = view_quantity; //display the quantity selected
										
						if (debounced == 4'hF) //next button
						begin	
							nstate = s4;
						end
						
						else //stay in state s3
							nstate = s3;
					end
					
					else //reset to state s0
						nstate = s0;
					
				end

				s4: // confirm selection with total price
				begin
				
					if(reset!=0)
					begin
						display_state = 8'h04;
						//since the multiplication logic was not working, we used this basic logic
						
						if (view_quantity == 8'h01 && view_quantity != 8'h00) //Quantity = 1
						begin
							view_price_q = view_price;
						end
						else if (view_quantity == 8'h02 && view_quantity != 8'h00) //Quantity = 2
						begin
							view_price_q = view_price + view_price;
						end
						else if (view_quantity == 8'h03 && view_quantity != 8'h00) //Quantity = 3
						begin
							view_price_q = view_price + view_price + view_price;
						end

						display_this = view_price_q;											
						entered_amount = 8'b00; //clearing the garbage values in entered amount variable
						
					end	
					
					else //stay in state s4
							nstate = s4;
					
					if(debounced == 4'hF) //if total price is okay then move forwards
							nstate = s5;
						
					else //stay in state s4
							nstate = s4;
					
					if (reset==0) //reset to state s0 
						nstate = s0;
						
				end
				
				s5: // Enter amount only $1 and $5 and $10.
				begin 
					if(reset!=0)
					begin
						
						display_state = 8'h05;
						
						if(debounced == 4'h8) //$1 button
						begin
							entered_amount = entered_amount + 8'h01;
						end
						
						else if(debounced == 4'h9) //$5 button
						begin
							entered_amount = entered_amount + 8'h05;
						end
						
						else if(debounced == 4'hA) //$10 button
						begin
							entered_amount = entered_amount + 8'hA;
						end

						
						
						display_this = entered_amount; //display the amount entered
						
						if (entered_amount >= view_price_q && debounced == 4'hF) //enter the amount and press next
						begin
							view_price_q = 8'h00;
							display_this = 8'h00; //clear the display
							nstate = s6;
						end
						
						else //stay in state s5
						begin
							nstate = s5;
						end
						
					end
					
					
					else // reset to state s0
						nstate = s0;
						
				end
				
				s6: //dispatch the product and wait for it to be taken
				begin
					if(reset!=0)
					begin
						
						display_state = 8'h06;
						
						if (debounced == 4'hF) //if product is taken, reset
						begin
							product_taken = 1;
							nstate = s0;
						end
						
						else //stay in the state
							nstate = s6;
					end
					
					else // reset to state s0
						nstate = s0;
					
				end
				
				default : state = s0; 
		
			endcase
	end
	
	initial begin
		$monitor("\n Button=%h , State=%h, Price=%h, Quantity=%h, Amount-To-Be-Paid=%h, Entered_Amount=%h",debounced,state,view_price,view_quantity,view_price_q,entered_amount);
	end
endmodule



