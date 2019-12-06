
module vm_testbench();

	// Inputs
	reg clk;
	reg reset;
	reg [3:0] row;

	// Outputs
	wire [6:0] D0;
	wire [6:0] D1;
	wire [6:0] D2;
	wire [6:0] D3;
	wire [6:0] D4;
	wire [6:0] D5;
	wire [3:0] shift_col;

	// Instantiate the Unit Under Test (UUT)
	vending_machine uut (
		.clk(clk), 
		.reset(reset), 
		.row(row), 
		.D0(D0), 
		.D1(D1), 
		.D2(D2), 
		.D3(D3), 
		.D4(D4), 
		.D5(D5), 
		.shift_col(shift_col)
	);

	always #1 clk = ~clk;
	
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		row = 4'b1111;

		#50;
		reset = 1;
      #10;
		row = 4'b1110;
		#10;
		row = 4'b1111;
		#2;
		row = 4'b1101;
		#10;
		row = 4'b1111;
		#2;
		row = 4'b1011;
		#10;
		row = 4'b1111;
		#2;
		row = 4'b0111;
		#10;
		row = 4'b1111;
		#2;
		
		
		
		#50
		reset = 0;
		#50;
		$finish;
	end
      
endmodule

