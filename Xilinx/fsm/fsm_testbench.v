
module fsm_testbench;

	// Inputs
	reg clk;
	reg reset;
	reg [3:0] c;
	reg [3:0] r;

	// Outputs
	wire view_price;
	wire view_quantity;
	wire view_price_q;
	wire entered_amount;

	// Instantiate the Unit Under Test (UUT)
	fsm uut (
		.clk(clk), 
		.reset(reset), 
		.c(c), 
		.r(r), 
		.view_price(view_price), 
		.view_quantity(view_quantity), 
		.view_price_q(view_price_q), 
		.entered_amount(entered_amount)
	);

	always #5 clk = ~clk;
	
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		reset = 1;
		c = 4'b1111;
		r = 4'b1111;
		
		#10;
		
		c = 4'b0111;
		r = 4'b0111;
		#20;
		c = 4'b1110;
		r = 4'b1110;
		#20;
		
		c = 4'b1111;
		r = 4'b1111;
		
		#50;
		$finish;
		
		
		
        
		// Add stimulus here

	end
      
endmodule

