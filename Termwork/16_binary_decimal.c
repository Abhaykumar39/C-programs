#include <stdio.h>

int binaryToDecimal(int binary)
{
    int decimal = 0, base = 1, remainder;

    while (binary > 0)
    {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }

    return decimal;
}

int main()
{
    int binary;
    printf("Enter a binary number: ");
    scanf("%d", &binary);

    int decimal = binaryToDecimal(binary);

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
