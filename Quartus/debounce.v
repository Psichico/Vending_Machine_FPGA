
module debounce(button,clk,reset,debounced);

	input button,clk,reset;
	output debounced;
	
	//wire debounced; //check if wire is needed or not

	reg dff1;// = 1'b0;
	reg dff2;// = 1'b0;

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
		
	// Flip flop 1
	always @ (posedge clk or negedge reset)
	begin
		if (reset==0) //if reset button pressed
		begin
				q1 <= 1'b0;
				q2 <= 1'b0;
		end
		
		else 
		begin
			q1 <= button;
			q2 <= q1;
		end
		
	end
	
/*	
	// Flip flop 2
	always @ (posedge clk or negedge reset)
	begin
		if (reset==0) //if reset button pressed
			q2 <= 1'b0;
			
		else //if button pressed
			q2 <= q1;
			
	end


	assign debounced = q1 & ~q2;

endmodule

*/


