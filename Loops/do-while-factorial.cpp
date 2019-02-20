// C Program to find the factorial of the number using do while loop

# include<stdio.h>
int main()
{
	int num, number, result=1;
	
	printf("\n Enter your number: ");
	scanf("%d", &num);
	
	number = num;
	
	do{
		
		result = result*num;
		num--;
			
	}while(num>=1);
	
	printf("The factorial of %d is %d.", number, result);
	
	return 0;
}
