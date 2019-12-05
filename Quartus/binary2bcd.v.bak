// Binary to BCD converter. Used for seven segment display


module binary2bcd(binary,h,t,o);

	input [7:0]binary;
	output h, t, o;
	
	reg [3:0] h,t,o;
   reg [19:0] shift;
   reg [3:0] i;
   
   always @ (binary)
   begin

      shift[19:8] = 0;
      shift[7:0] = binary;
      
      for (i=0; i<8; i=i+1) 
		begin
         if (shift[11:8] >= 5)
            shift[11:8] = shift[11:8] + 4'h3;
            
         if (shift[15:12] >= 5)
            shift[15:12] = shift[15:12] + 4'h3;
            
         if (shift[19:16] >= 5)
            shift[19:16] = shift[19:16] + 4'h3;
         
			else
				shift = shift << 1;
		end

		h = shift[19:16];
		t = shift[15:12];
		o = shift[11:8];

	end
endmodule
