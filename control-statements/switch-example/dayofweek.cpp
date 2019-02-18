// Program to return the day of the week based on user input

#include<stdio.h>
int main(){
	
	int choice;
	
	printf("\n Enter the choice between (1-7): ");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			printf("\n Today is Sunday");
			break;
		case 2:
			printf("\n Today is Monday");
			break;
		case 3:
			printf("\n Today is Tuesday");
			break;
		case 4:
			printf("\n Today is Wednesday");
			break;
		case 5:
			printf("\n Today is Thursday");
			break;
		case 6:
			printf("\n Today is Friday");
			break;
		case 7:
			printf("\n Today is Saturday");
			break;
		default:
			printf("\n Invalid Input");
		
	}
	
	return 0;
}
