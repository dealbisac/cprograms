//Program to calculate the divsion of the student using if-else ladder and nested statements.
 
 #include <stdio.h>  
int main()  
{  
    int marks;   
    printf("Enter your percentage?");  
    scanf("%d",&marks);   
    
    if (marks < 40){
    	
    	printf("Sorry You are fail ...");	
	}
	else   //Counter Part of If.
	{
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
       printf("Some Error Occured");    
    }  
			
	} //end of else part
    
    
}  
 
 
