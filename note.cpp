/*  

Assembly language involves register level programming 

Instruction Set 8085
1) Control
2) Logical
3) Branching
4) Arithmetic
5) Data Transfer

hlt stops the program 

Data Transfer Instructions


1) MOV      C

-> This instruction copies the contents of the source register into the destination register; the contents of the source register are not altered. 
   Example: MOV B, C or MOV B, M
    here C is source and B is destination.

    If one of the operands is a memory location, its location is specified by the contents of the HL registers.




2) MVI        

-> The 8-bit data is stored in the destination register or memory. 
   Example: MVI B, 57H or MVI M, 57H

If the operand is a memory location, its location is specified by the contents of the HL registers.


3) LDA       

-> The contents of a memory location, specified by a 16-bit address in the operand, are copied to the accumulator. 
   The contents of the source are not altered.
   Example: LDA 2034H



4) STA        

-> The contents of the accumulator are copied into the memory location specified by the operand.
Example: STA 4350H
arrow 4350 is operand



Arithmetic Instructions

1) ADD         Add register or memory, to accumulator
 
 -> The contents of the operand (register or memory) are added to the contents of the accumulator and the result is stored in the accumulator. 
*/