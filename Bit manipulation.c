//Bit Manipulation

//a) set the 5th bit
uint8_t A |= (1<<4);

//b) clear the 5th bit
A &= ~(1<<4);

//c) toggle the 5th bit
A ^= (1<<4);

//d) check the 5th bit
if (A&=(1<<4));

//e) toggle multiple bits, 1st, 3rd, 5th bit 
uint8_t num = 0b00011101;
uint8_t mask = (1<<0)|(1<<2)|(1<<4);

num^=mask;

/*Assume you have a 32-bit hardware register called CAN_BTR (Bit Timing Register).
Here is the memory layout of the 32 bits:
Bits 0 to 7 (8 bits): SJW (Sync Jump Width)
Bits 8 to 15 (8 bits): TSEG1 (Time Segment 1)
Bits 16 to 22 (7 bits): TSEG2 (Time Segment 2)
Bits 23 to 31 (9 bits): BRP (Baud Rate Prescaler)
Assume the register is declared as: volatile uint32_t CAN_BTR;
The Challenge
Task 1: Extraction
Write a single line of C code to extract only the TSEG1 value from CAN_BTR and store it in an 8-bit variable called tseg1_val.

Task 2: Read-Modify-Write (The classic combo)
The BRP field (bits 23 to 31) currently holds an unknown value. Write the C code to change the BRP field to a new value of 0x05, without altering the SJW, TSEG1, or TSEG2 fields (bits 0 through 22).
*/

//task 1
uint8_t tseg1_val = (CAN_BTR>>8)&0xFF;

//task 2
//reset the value at BRP first

mask=(1<<9)-1;
CAN_BTR &= ~(mask<<23);
CAN_BTR|=(0x05 << 23);

//quickest way to swap two numbers
a ^= b;
b ^= a; 
a ^= b;