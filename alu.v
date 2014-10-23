`include "define.v"// defines


module alu(
   a,   //1st operand
   b,   //2nd operand
   op,   //3-bit operation
   result,   //result
   zero
   );


   
   input [`DSIZE-1:0] a, b;
   input [2:0] op;
   input [`DSIZE-1:0] imm;
   output [`DSIZE-1:0] out;
   output reg 
   

	reg [`DSIZE-1:0] out; 
      
always @(*)
begin
   case(op)
       `ADD: out = a + b;
       `SUB: out = a - b;
       `AND: out = a & b;
       `XOR:  out = a ^ b;
       `SLL: out = a << imm;
       `SRL: out = a >> imm;
       `COM: out = a <= b;
       `MUL: out = a * b;
   endcase

   zero = (a == b)? 1'b1 : 1'b0;

end



endmodule
   
       
