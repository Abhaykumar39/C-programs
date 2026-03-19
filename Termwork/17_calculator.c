#include <stdio.h>

float calculator(int a, int b, char op)
{
    if (op == '+')
        return a + b;
    else if (op == '-')
        return a - b;
    else if (op == '*')
        return a * b;
    else if (op == '/')
        return a / b;
}

int main()
{
    int num1, num2;
    char op;
    float result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &op);

    result = calculator(num1, num2, op);

    printf("Result = %.2f\n", result);

    return 1;
}
