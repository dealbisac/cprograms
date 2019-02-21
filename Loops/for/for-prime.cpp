//C Program to find whether given number is prime or not using for loop

#include<stdio.h>
int main()
{
	int num, i=2;
	bool flag=false;
	
	printf("\n Enter your number: ");
	scanf("%d", &num);
	
	for(; i<=num/2; i++)
	{
		// condition for nonprime number
        if(num % i == 0)
        {
            flag = true;
            break;
        }

	}

    if (!flag)
        printf("%d is a prime number", num);
    else
        printf("%d is not a prime number", num);
    
    return 0;
    
}
