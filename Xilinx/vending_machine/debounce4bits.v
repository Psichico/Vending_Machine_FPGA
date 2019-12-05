// 4 bit debounce code

module debounce4bit(button, clk, reset, debounced);

	input clk, reset;
	input [3:0] button;
	output [3:0] debounced;
		
	debounce bit0(.button(button[0]),.clk(clk),.reset(reset),.debounced(debounced[0]));
	debounce bit1(.button(button[1]),.clk(clk),.reset(reset),.debounced(debounced[1]));
	debounce bit2(.button(button[2]),.clk(clk),.reset(reset),.debounced(debounced[2]));
	debounce bit3(.button(button[3]),.clk(clk),.reset(reset),.debounced(debounced[3]));
	
	
endmodule
