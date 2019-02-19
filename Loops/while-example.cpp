// C Program to show the example of while loop

#include<stdio.h>
int main()
{
	int i=0;
	
	while(i<1)
	{
		printf("\n\n\nInside Loop");
		printf("\n%d", i);
		i++;
	}
	
	printf("\n\n\nOutside Loop");
	
	printf("\n%d", i);
	
	return 0;
}
