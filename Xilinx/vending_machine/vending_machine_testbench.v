
module vending_machine_testbench;

	// Inputs
	reg clk;
	reg reset;
	reg [3:0] row;

	// Outputs
	wire [6:0] D0;
	wire [6:0] D1;
	wire [6:0] D2;
	wire [3:0] shift_col;

	// Instantiate the Unit Under Test (UUT)
	vending_machine uut (
		.clk(clk), 
		.reset(reset), 
		.row(row), 
		.D0(D0), 
		.D1(D1), 
		.D2(D2), 
		.shift_col(shift_col)
	);

	always #2 clk = ~clk;
	
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		row = 4'b1111;

		// Wait 100 ns for global reset to finish
		#100;
   
		reset = 1;
		row = 4'b1111;
		#10;
		repeat(50)
		begin
			row = 4'b1110;
			#1;
			row = 4'b1111;
			#5;
			/*row = 4'b1101;
			#1;
			row = 4'b1111;
			#5;
			row = 4'b1011;
			#1;
			row = 4'b1111;
			#5;
			row = 4'b0111;
			#1;
			row = 4'b1111;
			#5;*/
		end
		$finish;
		
		// Add stimulus here

	end
      
endmodule

