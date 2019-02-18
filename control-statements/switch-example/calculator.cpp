// Program to performs addition, subtraction, multiplication or division depending the input from user

# include <stdio.h>

int main() 
{
    char op;
    int num1,num2, result;

    printf("Enter an operator (+, -, *, %, /): ");
    scanf("%c", &op);

    printf("Enter two operands: ");
    scanf("%d %d",&num1, &num2);

    switch(op)
    {
        case '+':
        	result = num1+num2;
            printf("%d + %d = %d",num1, num2, result);
            break;

        case '-':
        	result = num1-num2;
            printf("%d - %d = %d",num1, num2, result);
            break;

        case '*':
        	result = num1*num2;
            printf("%d * %d = %d",num1, num2, result);
            break;

        case '/':
        	result = num1/num2;
            printf("%d / %d = %d",num1, num2, result);
            break;
            
        case '%':
        	result = num1%num2;
            printf("%d mod %d = %d",num1, num2, result);
            break;
        	
        // operator doesn't match any case constant (+, -, *, /, %)
        default:
            printf("Error! operator is not correct");
    }
    
    return 0;
}
