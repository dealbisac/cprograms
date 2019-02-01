// Constant using #define preproccesor

#include<stdio.h>    
#define PI 3.1416
int main()
{    
	float area, radius;       
	printf("The value of PI is: %f\n",PI);  
	
	printf("Enter the value of radius: ");
	scanf("%f", &radius);
	
	area = PI*radius*radius;
	
	printf("\nThe area of circle is %f", area);  
    
	return 0;  
}     
