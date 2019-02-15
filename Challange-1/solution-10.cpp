// 10. C Program to Swap Two numbers Entered by User without Using Temporary Variable

#include <stdio.h>
int main()
{
    int firstNumber, secondNumber;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);

    printf("Enter second number: ");
    scanf("%d",&secondNumber);

    // Swapping process
    
    //Suppose firstNumber=10, secondnumber =20
    // firstNumber => 10-20 => -10
    firstNumber = firstNumber - secondNumber;
    
    //secondNumber => -10+20 => 10
    secondNumber = firstNumber + secondNumber;
    
    //firstNumber => 10 -(-10) => 10+10  => 20
    firstNumber = secondNumber - firstNumber;

    printf("\nAfter swapping, firstNumber = %d\n", firstNumber);
    printf("After swapping, secondNumber = %d", secondNumber);

    return 0;
}
