
module vending_machine_testbench;

	// Inputs
	reg clk;
	
	reg reset;
	reg [3:0] row;
   reg [3:0] test_value;

	// Outputs
	wire [6:0] D0;
	wire [6:0] D1;
	wire [6:0] D2;
	reg [3:0] shift_col;
	//wire [3:0] debounced;
	//wire [3:0] key_value;
	
	// Instantiate the Unit Under Test (UUT)
	vending_machine uut (
		.clk(clk), 
		.reset(reset), 
		.row(row), 
		.test_value(test_value),
		.D0(D0), 
		.D1(D1), 
		.D2(D2), 
		.shift_col(shift_col)
		//.debounced(debounced),
		//.key_value(key_value)
	);

	always #1 clk = ~clk;
	
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		row = 4'b1111;
		#10;

		reset = 1;
		row = 4'b1111;
		
		#10;
		
		test_value = 4'hF;
		#10;
		test_value = 4'hF;
		#5;
		test_value = 4'hF;
		#10;
		test_value = 4'hF;
		#5;
		test_value = 4'h1;
		#10;
		test_value = 4'h0;
		#5;
		test_value = 4'hF;
		#10;
		test_value = 4'h0;
		#5;
		test_value = 4'hC;
		#10;
		test_value = 4'h0;
		#5;
		test_value = 4'hF;
		#10;
		test_value = 4'h0;
		#5;
		test_value = 4'hE;
		#10;
		test_value = 4'h0;
		#5;
		test_value = 4'h8;
		#10;
		test_value = 4'h0;
		#5;
		
		
		

		$finish;
		
		// Add stimulus here

	end
      
endmodule

