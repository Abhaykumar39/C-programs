#include <stdio.h>

int main()
{
    int x, y, result;

    printf("Enter first number (x): ");
    scanf("%d", &x);

    printf("Enter second number (y): ");
    scanf("%d", &y);

    if (x % y == 0)
    {
        result = x / y;
        printf("%d is divisible by %d\n", x, y);

        if (result > 0)
            printf("The result %d is positive.\n", result);
        else if (result < 0)
            printf("The result %d is negative.\n", result);
        else
            printf("The result is zero.\n");
    }
    else
    {
        printf("%d is not divisible by %d\n", x, y);
    }

    
}
