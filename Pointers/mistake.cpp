int c, *pc;

// Wrong! pc is address whereas, 
// c is not an address.
pc = c;  

// Wrong! *pc is the value pointed by address whereas, 
// &c is an address.
*pc = &c; 

// Correct! pc is an address and, 
// &c is also an address.
pc = &c; 

// Correct! *pc is the value pointed by address and, 
// c is also a value (not address).
*pc = c;
