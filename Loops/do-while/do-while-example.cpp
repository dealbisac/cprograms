// C Program to show the example of do while loop

#include<stdio.h>
int main()
{
	int i=0;
	
	do{
		
		printf("\n\nInside Loop");
		printf("\n%d", i);
		i++;
		
	}while(i<=5);
	
	printf("\n\n\nOutside Loop");
	
	printf("\n%d", i);
	
	return 0;
}
