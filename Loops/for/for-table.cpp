//C Program to print the table of a number given by user.

#include<stdio.h>  
int main()
{
	int i=1,number=0;
	
	printf("Enter a number: ");    
	scanf("%d",&number); 
	
	for(i=1;i<=10;i++)
	{      
		printf("%d * %d = %d \n",number, i, (number*i));   
	}   
	
	return 0;  
}    
