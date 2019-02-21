// C Program to show the menu until user exits

#include<stdio.h>
#include<stdlib.h> //used for exit(0)
int main()
{
	
	int choice;
	
	printf("\n Welcome to DBC Bank ");
	
	for(; 1;)
	{
		printf("\n 1. Balance Enquiry");
		printf("\n 2. Cash Withdrawal");
		printf("\n 3. Fast Cash");
		printf("\n 4. Mini Statement");
		printf("\n 5. Exit");
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
				printf("\n You choose Balance Enquiry Option");
				break;
			
			case 2:
				printf("\n You choose Cash Withdrawal Option");
				break;
				
			case 3:
				printf("\n You choose Fast Cash Option");
				break;
			
			case 4:
				printf("\n You choose Mini Statement Option");
				break;
			
			case 5:
				printf("\n You are about to terminate");
				exit(0);
			
			default:
				printf("Please enter between (1-5)");	
			 
		} // end of switch statements
		
		
	} // end of while loop
	
	printf("Thanks for being here");
	
	return 0;
}
