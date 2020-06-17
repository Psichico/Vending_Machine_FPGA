
module vm_testbench();

	// Inputs
	reg clk;
	reg reset;
	reg [3:0] row;
	reg [3:0] shift_col; //comment this when not using testbench

	// Outputs
	wire [6:0] D0;
	wire [6:0] D1;
	wire [6:0] D2;
	wire [6:0] D3;
	wire [6:0] D4;
	wire [6:0] D5;
	//wire [3:0] shift_col; //uncomment this when not using testbench

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
		
		{shift_col,row} = 8'b0111_0111; //press F
		#10;
		{shift_col,row} = 8'b1111_1111;
		#10;
		{shift_col,row} = 8'b1110_1101; //press 1
		#10;
		{shift_col,row} = 8'b1111_1111;
		#10;
		{shift_col,row} = 8'b0111_0111; //press F
		#10;
		{shift_col,row} = 8'b1111_1111;
		#10;
		{shift_col,row} = 8'b0111_1110; //press C to increase the count to 1
		#10;
		{shift_col,row} = 8'b1111_1111;
		#10;
		{shift_col,row} = 8'b0111_0111; //press F for okay
		#10;
		{shift_col,row} = 8'b1111_1111;
		#10;
		{shift_col,row} = 8'b1111_1111;
		#10;
		{shift_col,row} = 8'b1111_1111;
		#10;
		{shift_col,row} = 8'b1111_1111;
		#10;
		{shift_col,row} = 8'b0111_0111; //press F for okay
		#10;
		{shift_col,row} = 8'b1111_1111;
		#10;
		{shift_col,row} = 8'b1011_1110; //press 8 for $1
		#10;
		{shift_col,row} = 8'b1111_1111;
		#10;
		{shift_col,row} = 8'b1011_1101; //press 9 for $5
		#10;
		{shift_col,row} = 8'b1111_1111;
		#10;
		{shift_col,row} = 8'b0111_0111; //press F for okay
		#10;
		{shift_col,row} = 8'b1111_1111;
		#10;
		{shift_col,row} = 8'b1111_1111;
		#10;
		{shift_col,row} = 8'b1111_1111;
		#10;
		{shift_col,row} = 8'b1111_1111;
		#10;
		{shift_col,row} = 8'b1111_1111;
		#10;
		{shift_col,row} = 8'b0111_0111; //press F for to go to state s0
		#10;		
		
		#50
		reset = 0;
		#50;
		$finish;
	end
	
      
endmodule

