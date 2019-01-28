#include "myfile.h"  
#include <stdio.h>  
void printValue(){  
    printf("Global variable: %d", x);  
} 
int main(){
	printValue();
	
	return 0;
} 
