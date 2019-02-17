//Simple Example of Switch Statement
/*
The switch statement in C is an alternate to if-else-if ladder statement which allows us to execute multiple operations for the different possibles 
values of a single variable called switch variable. 
Here, We can define various statements in the multiple cases for the different values of a single variable.

Syntax:

switch(expression){    
case value1:    
 //code to be executed;    
 break;  //optional  
case value2:    
 //code to be executed;    
 break;  //optional  
......    
    
default:     
 code to be executed if all cases are not matched;    
}  

*/  

#include<stdio.h>  
int main(){    
int number=0;     
printf("enter a number:");    
scanf("%d",&number);    
switch(number){    
case 10:    
printf("number is equals to 10");    
break;    
case 50:    
printf("number is equal to 50");    
break;    
case 100:    
printf("number is equal to 100");    
break;    
default:    
printf("number is not equal to 10, 50 or 100");    
}    
return 0;  
}    
