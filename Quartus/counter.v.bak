//Counter module that will keep track of the number of times button is pressed

module counter(button, clk, reset, count);

	input button;
	input clk, reset;
	output [4:0] count;

	always @(posedge clk or negedge reset)
	begin
		
		if(!reset)
			count <= 4'h00;

		else if(button == 1) //verify if it is 1 or 0
			count <= count + 4'h01;
		
		else
			count <= count;
		
		end

end
