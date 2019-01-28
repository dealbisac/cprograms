//External Variable Example

#include "myfile.h"  
#include <stdio.h>  
void printValue(){  
    printf("Global variable: %d\n", x);  
} 
int main(){
	printValue();
	
	printf("Global variable: %d\n", x);
	
	return 0;
} 
