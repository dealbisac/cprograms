// Program to write a menu using switch case

#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int choice;
	
	while(1){
		
	printf("\n\t\t\t\t =============MENU==============");
	printf("\n\t\t\t\t === 1. Simple Switch Example ==");
	printf("\n\t\t\t\t === 2. Days of Week ===========");
	printf("\n\t\t\t\t === 3. Calculator =============");
	printf("\n\t\t\t\t === 4. Exit ===================");
	
	printf("\n\n\t\t\t\tYOUR CHOICE : ");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			printf("\n\n\t\t\t\tYOUR CHOICE IS 1");
			break;
		case 2:
			printf("\n\n\t\t\t\tYOUR CHOICE IS 2");
			break;
		case 3:
			printf("\n\n\t\t\t\tYOUR CHOICE IS 3");
			break;
		case 4:
			printf("\n\n\t\t\t\tYOUR CHOICE IS 4");
			exit(0);
		default:
			printf("\n\n\t\t\t\tINVALID CHOICE");
	}
		
	} //end of while
	
	
	return 0;
}
