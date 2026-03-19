#include <stdio.h>

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = num << 1;

    printf("%d multiplied by 2 is %d\n", num, result);

    return 1;
}
