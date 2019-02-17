//
/*

The if-else-if ladder statement is an extension to the if-else statement. It is used in the scenario where there are multiple cases to be performed for
 different conditions. In if-else-if ladder statement, if a condition is true then the statements defined in the if block will be executed, otherwise if 
 some other condition is true then the statements defined in the else-if block will be executed, at the last if none of the condition is true then the 
 statements defined in the else block will be executed. There are multiple else-if blocks possible. It is similar to the switch case statement 
 where the default is executed instead of else block if none of the cases is matched.
 
 
 Syntax:
 
 if(condition1){  
//code to be executed if condition1 is true  
}else if(condition2){  
//code to be executed if condition2 is true  
}  
else if(condition3){  
//code to be executed if condition3 is true  
}  
...  
else{  
//code to be executed if all the conditions are false  
}  

 */
 
 #include <stdio.h>  
int main()  
{  
    int marks;   
    printf("Enter your percentage?");  
    scanf("%d",&marks);   
    
    if(marks >= 80 && marks <= 100)  
    {  
        printf("Congrats ! You have scored Distinction.");   
    }  
    else if (marks >= 70 && marks < 80 )   
    {  
        printf("Congrats ! You have scored First Division.");  
    }  
    else if (marks >= 60 && marks < 70)   
    {  
        printf("Congrats ! You have scored Second Division.");  
    }  
    else if (marks >= 40 && marks < 60)   
    {  
        printf("Congrats ! You have scored Third Division.");   
    }  
    else   
    {  
        printf("Sorry You are fail ...");   
    }  
}  
 
 
