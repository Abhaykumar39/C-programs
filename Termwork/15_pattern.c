#include <stdio.h>

int main()
{
    int i, j;

    // 1️⃣ STAR PATTERN
    printf("\n--- Star Pattern ---\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // 2️⃣ ABCD PATTERN
    printf("\n--- Alphabet Pattern ---\n");
    for (i = 1; i <= 5; i++)
    {
        char ch = 'A';
        for (j = 1; j <= i; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    // 3️⃣ 1234 PATTERN
    printf("\n--- Number Pattern ---\n");
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    // 4️⃣ REVERSE NUMBER PATTERN
    printf("\n--- Reverse Number Pattern ---\n");
    for (i = 5; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    // 5️⃣ TABLE OF 2 PATTERN
    int num = 2;
    printf("\n--- Table of 2 Pattern ---\n");
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", num * j);
        }
        printf("\n");
    }

    // 6️⃣ DIAMOND PATTERN
    printf("\n--- Diamond Pattern ---\n");
    int space, k;
    for (i = 1; i <= 5; i++)
    {
        for (space = i; space < 5; space++)
            printf(" ");
        for (k = 1; k <= (2 * i - 1); k++)
            printf("*");
        printf("\n");
    }
    for (i = 4; i >= 1; i--)
    {
        for (space = 5; space > i; space--)
            printf(" ");
        for (k = 1; k <= (2 * i - 1); k++)
            printf("*");
        printf("\n");
    }

    return 0;
}
