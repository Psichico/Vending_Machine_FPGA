//Counter module that will keep track of the number of times button is pressed

module counter(button, clk, reset, count);

	input button;
	input clk, reset;
	output count;
	
	reg [7:0] count;

	always @(posedge clk or negedge reset)
	begin
		
		if(!reset)
			count <= 8'b00000000;

		else 
			count <= count + {4'b0000 , button};	

	end
	
endmodule

