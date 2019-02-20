/*

do-while loop in C
The do-while loop continues until a given condition satisfies. It is also called post tested loop. 
It is used when it is necessary to execute the loop at least once (mostly menu driven programs).

The syntax of do-while loop in c language is given below:

do{  
//code to be executed  
}while(condition);  

*/
#include<stdio.h>  
int main()
{    
int i=1;      
do{    
printf("%d \n",i);    
i++;    
}while(i<=10);   
return 0;  
}     

