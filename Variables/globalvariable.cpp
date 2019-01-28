//Gloabal Variable Example

#include<stdio.h>
int number = 5; //global variable
void count(){
	int x=5;
	x++; 
	
	printf("The value of x is %d from local scope of function.\n", x);
	printf("The value of global variable is %d \n", number);
}
int main(){
	
	int x = 8;
	printf("The value of x is %d from local scope of main\n", x);
	count();
	printf("The value of global variable is %d\n", number);
	
	return 0;
}
