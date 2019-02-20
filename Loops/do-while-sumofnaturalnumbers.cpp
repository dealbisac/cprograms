// C program to calculate sum of natural numbers upto the term provided by user using do while

#include<stdio.h>
int main()
{
	int num, i=1, sum=0;
	
	printf("\nEnter the positive integor: ");
	scanf("%d", &num);
	
	do{
		
		sum = sum+i;
		i++;
	}while(i<=num);
	
	printf("The summation of natural numbers upto %d is %d.", num, sum);
	
	return 0;
}
