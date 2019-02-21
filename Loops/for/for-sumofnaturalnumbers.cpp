// C program to calculate sum of natural numbers upto the term provided by user using for loop

#include<stdio.h>
int main()
{
	int num, i=1, sum=0;
	
	printf("\nEnter the positive integor: ");
	scanf("%d", &num);
	
	for(; i<=num; i++)
	{
		sum = sum+i;
	}
	
	printf("The summation of natural numbers upto %d is %d.", num, sum);
	
	return 0;
}
