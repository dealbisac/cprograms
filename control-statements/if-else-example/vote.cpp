// C Program to know whether one can voteor not using if-else statements
#include <stdio.h>  
int main()  
{  
    int age;   
    printf("Enter your age?");   
    scanf("%d",&age);  
    if(age>=18)  
    {  
        printf("You are eligible to vote...");   
    }  
    else   
    {  
        printf("Sorry ... you can't vote");   
    }  
}  
