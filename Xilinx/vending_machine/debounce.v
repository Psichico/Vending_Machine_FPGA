

module debounce(button,clk,reset,debounced);

	input button,clk,reset;
	output debounced;
	
	wire debounced;

	reg dff1 = 1'b0;
	reg dff2 = 1'b0;

	always @ (posedge clk, negedge reset)
	begin
		if(reset==0)
			{dff2,dff1} <= 2'b00;
		else 
			{dff2,dff1} <= {dff1,button};
	end

	assign debounced = (dff1&~dff2);
	
endmodule



