//Ternary Operator challange 1 

#include<stdio.h>
int main(){
	
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	
	(age>=18)?printf("You can vote"): printf("You cannot vote");
	
	return 0;
}
