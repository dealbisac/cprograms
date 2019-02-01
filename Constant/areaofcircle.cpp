// Constant using const keyword

#include<stdio.h>    
int main()
{    
	const float PI=3.14;  
	float area, radius;       
	printf("The value of PI is: %f\n",PI);  
	
	printf("Enter the value of radius: ");
	scanf("%f", &radius);
	
	area = PI*radius*radius;
	
	printf("\nThe area of circle is %f", area);  
    
	return 0;  
}     
