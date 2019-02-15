// 9. C Program to Swap Two numbers Entered by User Using Temporary Variable

#include <stdio.h>
int main()
{
      int firstNumber, secondNumber, temporaryVariable;

      printf("Enter first number: ");
      scanf("%d", &firstNumber);

      printf("Enter second number: ");
      scanf("%d",&secondNumber);

      // Value of firstNumber is assigned to temporaryVariable
      temporaryVariable = firstNumber;

      // Value of secondNumber is assigned to firstNumber
      firstNumber = secondNumber;

      // Value of temporaryVariable (which contains the initial value of firstNumber) is assigned to secondNumber
      secondNumber = temporaryVariable;

      printf("\nAfter swapping, firstNumber = %d\n", firstNumber);
      printf("After swapping, secondNumber = %d", secondNumber);

      return 0;
}
