//C Program to show difference between logical and bitwise operator

#include<stdio.h>
int main(){
	int a=10;  
	int b=5;  
	int c=20; 
	int result;
	
	//Difference between && and &
	printf("\nDifference between && and &\n");
	result =(a<b) && (a++<c);
	printf("(a<b) && (a++<c) is %d\n", result );  //false && true = false  
	printf("a = %d\n", a); //10 because second condition is not checked  
	
	result = (a<b) & (a++<c);
	printf("(a<b) & (a++<c) is %d\n", result);//false & true = false  
	printf("a = %d\n", a);//11 because second condition is checked 
	
	
	//Difference between || and |
	printf("\n\nDifference between || and |\n");
	result = (a>b) || (a++>c);
	printf("(a>b) || (a++>c) is %d\n", result);//true || false = true  
	printf("a = %d\n", a); //11 because second condition is not checked
	
	result = (a>b) | (a++>c);
	printf("(a>b) | (a++>c) is %d \n", result);//true | false = true  
	printf("a = %d\n", a); //12 because second condition is not checked
	
	//|| vs |  
	printf("\n || vs |  \n \n");
	result = (a>b) || (a++<c);
	printf("(a>b) || (a++<c) is %d \n", result);//true || true = true  
	printf("a = %d\n", a);//12 because second condition is not checked  
	printf("(a>b) | (a++<c) is %d\n", result);//true | true = true  
	printf("a=%d\n", a);//12 because second condition is checked  
	
	
	return 0;
}

