// Constant using const keyword

#include<stdio.h>    
int main(){    
    const float PI=3.14;  
	int radius;  
	float area;
	
    //printf("The value of PI is: %f\n",PI);   
	
	printf("Enter the value of radius: ");
	scanf("%d, &radius");
	
	area= PI*radius*radius;
	
	printf("The area is %f\n", area);
	 
    return 0;  
}     
