#include <stdio.h>

int main()
{
    int i, result;

    printf("Multiplication Table of 4:\n");

    for (i = 1; i <= 10; i++)
    {

        result = i << 2;
        printf("4 x %d = %d\n", i, result);
    }

    return 1;
}
