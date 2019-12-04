//Counter module that will keep track of the number of times button is pressed

module counter(button, clk, reset, count);

	input button;
	input clk, reset;
	output count;
	
	reg [3:0] count;

	always @(posedge clk or negedge reset)
	begin
		
		if(!reset)
			count <= 4'b0000;

		else 
			count <= count + button;	

	end
	
endmodule

