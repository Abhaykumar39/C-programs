#include <stdio.h>
int main()
{
    int base, exponent, i;
    int power = 1;

    printf("Enter base number: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for (i = 1; i <= exponent; i++)
    {
        power = power * base;
    }

    printf("Result = %d", power);

    return 0;
}
