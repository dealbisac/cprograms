//Local Variable Example

#include<stdio.h>
void count(){
	int x=5;
	x++; 
	
	printf("The value of x is %d from local scope\n", x);
}
int main(){
	
	int x = 8;
	printf("The value of x is %d from global scope\n", x);
	count();
	
	return 0;
}
