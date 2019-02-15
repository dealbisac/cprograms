// 3. C Program to Add Two Integers Entered by User

#include<stdio.h>
int main(){
	int num1, num2, sum;
	
	printf("\n Enter the first number: ");
	scanf("%d", &num1);
	
	printf("\n Enter the second number: ");
	scanf("%d", &num2);
	
	sum = num1+num2;
	
	printf("\n The sum of %d and %d is %d", num1, num2, sum);
	
	return 0;
}
