/* Program to Perform Arithmetic Operations in C */

#include<stdio.h>

int main()
{
 int a = 12, b = 3;
 int addition, subtraction, multiplication, division, modulus;
 
 addition = a + b; //addition of 3 and 12
 subtraction = a - b; //subtract 3 from 12
 multiplication = a * b; //Multiplying both
 division = a / b; //dividing 12 by 3 (number of times)
 modulus = a % b; //calculation the remainder
 
 printf("Addition of two numbers a, b is : %d\n", addition);
 printf("Subtraction of two numbers a, b is : %d\n", subtraction);
 printf("Multiplication of two numbers a, b is : %d\n", multiplication);
 printf("Division of two numbers a, b is : %d\n", division);
 printf("Modulus of two numbers a, b is : %d\n", modulus);

}
