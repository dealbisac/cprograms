// C Program to show the menu until user exits

#include<stdio.h>
int main()
{
	
	int choice;
	
	while(1)
	{
		printf("\n 1. Balance Enquiry");
		printf("\n 2. Cash Withdrawal");
		printf("\n 3. Fast Cash");
		printf("\n 4. Mini Statement");
		printf("\n 5. Exit");
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
	}
	
	printf("Thanks for being here");
	
	return 0;
}
