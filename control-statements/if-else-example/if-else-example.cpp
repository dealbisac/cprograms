//Program to find whether the given number is odd or even using if-else statements.
/*

The if-else statement is used to perform two operations for a single condition. 
The if-else statement is an extension to the if statement using which, we can perform two different operations, i.e., one is for the correctness of that condition,
 and the other is for the incorrectness of the condition. Here, we must notice that if and else block cannot be executed simiulteneously.
  Using if-else statement is always preferable since it always invokes an otherwise case with every if condition. 
  The syntax of the if-else statement is given below.

if(expression){  
//code to be executed if condition is true  
}else{  
//code to be executed if condition is false  
}  

*/

#include<stdio.h>    
int main()
{    
int number=0;    
printf("Enter a number:");    
scanf("%d",&number);     
if(number%2==0){    
printf("%d is even number",number);    
}    
else{    
printf("%d is odd number",number);    
}     
return 0;  
}    
