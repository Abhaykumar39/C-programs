#include <stdio.h>

void starPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void alphabetPattern(int n)
{
    char ch;
    for (int i = 1; i <= n; i++)
    {
        ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}

void numberPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("\n--- Star Pattern ---\n");
    starPattern(n);

    printf("\n--- Alphabet Pattern ---\n");
    alphabetPattern(n);

    printf("\n--- Number Pattern ---\n");
    numberPattern(n);

    return 1;
}
