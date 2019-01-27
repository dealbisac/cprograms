// Square od number with user interaction

#include<stdio.h>
int main(){
	
	int number, result;
	printf("Enter the number: ");
	scanf("%d", &number);
	result = number*number;
	printf("The square of %d is %d.", number, result);
	return 0;
}
