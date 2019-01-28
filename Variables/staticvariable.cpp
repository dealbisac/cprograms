//Static Variable Example

#include<stdio.h>
void count(){
	static int x=5;
	int y =5;
	x++; 
	y++;
	
	printf("The value of x is %d\n", x);
	printf("The value of y is %d\n", y);
}
int main(){
	count();
	count();
	count();
	
	return 0;
}
