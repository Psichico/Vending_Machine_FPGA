
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
	wire [3:0] debounced;
	wire [3:0] key_value;
	
	// Instantiate the Unit Under Test (UUT)
	vending_machine uut (
		.clk(clk), 
		.reset(reset), 
		.row(row), 
		.D0(D0), 
		.D1(D1), 
		.D2(D2), 
		.shift_col(shift_col),
		.debounced(debounced),
		.key_value(key_value)
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
		shift_col = 4'b1111;
		#10;
		

		{shift_col,row} = 	8'b1110_1110;	
		#4;
		{shift_col,row} = 	8'b1111_1111;
		#4;
		{shift_col,row} = 	8'b1110_1110;	
		#4;
		{shift_col,row} = 	8'b1111_1111;
		#4;
		{shift_col,row} = 	8'b1111_1111;	
		#4;
		{shift_col,row} = 	8'b1110_0111;
		#4;
		{shift_col,row} = 	8'b1111_1111;	
		#4;
		{shift_col,row} = 	8'b1101_1110;
		#4;
		{shift_col,row} = 	8'b1111_1111;	
		#4;
		{shift_col,row} = 	8'b1101_1101;
		#4;
		{shift_col,row} = 	8'b1111_1111;	
		#4;
		{shift_col,row} = 	8'b1101_1011;
		#4;
		{shift_col,row} = 	8'b1111_1111;	
		#4;
		{shift_col,row} = 	8'b1101_0111;
		#4;
		{shift_col,row} = 	8'b1111_1111;	
		#4;
		{shift_col,row} = 	8'b1011_1110;
		#4;
		{shift_col,row} = 	8'b1111_1111;	
		#4;
		{shift_col,row} = 	8'b1011_1101;
		#4;
		{shift_col,row} = 	8'b1111_1111;	
		#4;
		{shift_col,row} = 	8'b1011_1011;
		#4;
		{shift_col,row} = 	8'b1111_1111;	
		#4;
		{shift_col,row} =		8'b1011_0111;
		#4;
		{shift_col,row} = 	8'b1111_1111;	
		#4;
		{shift_col,row} =		8'b0111_1110;
		#4;
		{shift_col,row} = 	8'b1111_1111;	
		#4;
		{shift_col,row} =		8'b0111_1101;
		#4;
		{shift_col,row} = 	8'b1111_1111;	
		#4;
		{shift_col,row} =		8'b0111_1011;
		#4;
		{shift_col,row} = 	8'b1111_1111;	
		#4;
		{shift_col,row} =		8'b0111_0111;
		#4;
		{shift_col,row} = 	8'b1111_1111;	
		#4;
		#50;
		$finish;
		
		// Add stimulus here

	end
      
endmodule

