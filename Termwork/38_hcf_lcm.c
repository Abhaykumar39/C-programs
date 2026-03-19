#include <stdio.h>

int hcf(int x, int y)
{
    if (y == 0)
        return x;
    else
        return hcf(y, x % y);
}

int main()
{
    int a, b, H, L;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    H = hcf(a, b);
    L = (a * b) / H;

    printf("HCF of %d and %d is: %d\n", a, b, H);
    printf("LCM of %d and %d is: %d\n", a, b, L);

    return 0;
}

