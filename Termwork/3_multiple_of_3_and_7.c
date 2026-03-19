#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0)
    {
        printf("%d is a multiple of 3 and 7", num);
    }
    else
    {
        printf("%d is a not multiple of 3 and 7", num);
    }

    return 0;
}