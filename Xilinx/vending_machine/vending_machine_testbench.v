
module vending_machine_testbench;

	// Inputs
	reg clk;
	
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
		.reset(reset), 
		.row(row), 
		.D0(D0), 
		.D1(D1), 
		.D2(D2), 
		.shift_col(shift_col)
	);

	always #1 clk = ~clk;
	
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		row = 4'b1111;
		#11;

		reset = 1;
		row = 4'b1111;
		shift_col = 4'b1111;
		#10;
		
		row = 4'b0111; //press F : go to state 1
		shift_col = 4'b0111;
		#5; 
		row = 4'b1101; //press 1 : go to state 2
		shift_col = 4'b1110;
		#5; 
		row = 4'b0111; //press F : go to state 3
		shift_col = 4'b0111;
		#5;
		row = 4'b1011; // press E : go to state 5
		shift_col = 4'b0111;
		#5;
		
		#50;
		$finish;
		
		// Add stimulus here

	end
      
endmodule

