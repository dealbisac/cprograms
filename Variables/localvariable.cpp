//Local Variable Example

#include<stdio.h>
void count(){
	int x=5; //local variable of count function
	x++; 
	
	printf("The value of x is %d from local scope of function.\n", x);
}
int main(){
	
	int x = 8;  //local variable of main function
	printf("The value of x is %d from local scope of main\n", x);
	count();
	
	return 0;
}
