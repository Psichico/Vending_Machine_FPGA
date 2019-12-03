// 4 bit debounce code

module debounce4bit (button, clk, reset, debounced);

	input clk, reset;
	input [3:0] button;
	output [3:0] debounced;
	
	//reg [3:0] debounced;
	
	debounce bit0(button[0],clk,reset,debounced[0]);
	debounce bit1(button[1],clk,reset,debounced[1]);
	debounce bit2(button[2],clk,reset,debounced[2]);
	debounce bit3(button[3],clk,reset,debounced[3]);

endmodule
