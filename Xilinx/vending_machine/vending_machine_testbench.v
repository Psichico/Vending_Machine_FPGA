
module vending_machine_testbench;

	// Inputs
	reg clk;
	reg clk2;
	reg reset;
	reg [3:0] row;

	// Outputs
	wire [6:0] D0;
	wire [6:0] D1;
	wire [6:0] D2;
	reg [3:0] shift_col;

	// Instantiate the Unit Under Test (UUT)
	vending_machine uut (
		.clk(clk), 
		.clk2(clk2),
		.reset(reset), 
		.row(row), 
		.D0(D0), 
		.D1(D1), 
		.D2(D2), 
		.shift_col(shift_col)
	);

	always #6 clk = ~clk;
	always #3 clk2 = ~clk2;
	
	initial begin
		// Initialize Inputs
		clk = 0;
		clk2 = 0;
		reset = 0;
		row = 4'b1111;

		// Wait 100 ns for global reset to finish
		#100;
   
		reset = 1;
		row = 4'b1111;
		shift_col = 4'b1111;
		
		#10;
		//repeat(50)_
		//begin
			/*
			shift_col = 4'b0111; //got to state 1
			row = 4'b0111;
			#40;
			shift_col = 4'b1111;
			row = 4'b1111;
			#40;
			shift_col = 4'b1110;//go to state 2
			row = 4'b1011;
			#40;
			shift_col = 4'b1111;
			row = 4'b1111;
			#40; //_
			shift_col = 4'b0111; //go to state 3
			row = 4'b1110;
			#40;
			shift_col = 4'b1111;
			row = 4'b1111;
			#40; 
			shift_col = 4'b0111; //got to state 4
			row = 4'b1011;
			#40;
			shift_col = 4'b1111;
			row = 4'b1111;
			#40; 
			shift_col = 4'b0111; //got to state 5
			row = 4'b1101;
			#40;
			shift_col = 4'b1111;
			row = 4'b1111;
			#10;
			shift_col = 4'b1101; //press button 6
			row = 4'b1011;
			#40;
			shift_col = 4'b1111;
			row = 4'b1111;
			#40; 
			shift_col = 4'b1011; //got to state 6
			row = 4'b1011;
			#40;
			shift_col = 4'b1111;
			row = 4'b1111;
			#40; 
			shift_col = 4'b1101; //got to state 0
			row = 4'b0111;
			#40;
			shift_col = 4'b1111;
			row = 4'b1111;
			#250;
			repeat(20)
			begin
			shift_col = 4'b0111; //got to state 1
			row = 4'b1110;
			#8;
			shift_col = 4'b1111;
			row = 4'b1111;
			#8;
			end
			//end
			*/
			repeat(50)
			begin
			
			row = 4'b1110;
			shift_col = 4'b0111;
			#10;
			shift_col = 4'b1111;
			row = 4'b1111;
			#5;
			end
		$finish;
		
		// Add stimulus here

	end
      
endmodule

