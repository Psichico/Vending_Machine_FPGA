
module debounce(button,clk,reset,debounced);

	input button,clk,reset;
	output debounced;

	reg dff1,dff2;

	always @ (posedge clk, negedge reset)
	begin
		if(reset==0)
			{dff2,dff1} <= 2'b00;
		else 
			{dff2,dff1} <= {dff1,button};
	end

	assign debounced = (dff1&~dff2);
	
endmodule







/*
// Button debouncer code

module debounce(button, clk, reset, debounced);

	input button;
	input clk, reset;
	output debounced;
	
	reg q1, q2;
	
	initial
	begin
		q1 <= 1'b0;
		q2 <= 1'b0;
	end
	
	// Flip flop 1
	always @ (posedge clk)
	begin
		if (!reset) //if reset button pressed
				q1 <= 1'b0;
				
		else if (button == 1'b0) //if button pressed
			q1 <= 1'b1;			

		else // if button not pressed
			q1 <= 1'b0;

	end
	
	
	// Flip flop 2
	always @ (posedge clk)
	begin
		if (!reset) //if reset button pressed
			q2 <= 1'b0;
			
		else if (button == 1'b0) //if button pressed
			q2 <= q1;
			
		else //if button not pressed
			q2 <= 1'b0;
	end


	assign debounced = q1 & ~q2;

endmodule
*/




