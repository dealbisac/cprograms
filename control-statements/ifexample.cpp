//Program to find whether the given number is even using if statements.
/*

The if statement is used to check some given condition and perform some operations depending upon the correctness of that condition. 
It is mostly used in the scenario where we need to perform the different operations for the different conditions. 
The syntax of the if statement is given below.

if(expression){  
//code to be executed  
}  

*/

#include<stdio.h>    
int main()
{    
int number=0;    
printf("Enter a number:");    
scanf("%d",&number);    
if(number%2==0)
{    
printf("%d is even number",number);    
}    
return 0;  
}    
