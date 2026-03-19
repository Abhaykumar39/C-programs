#include <stdio.h>

int power(int base, int exp)
{
    int result = 1;
    for (int i = 1; i <= exp; i++)
    {
        result = result * base;
    }
    return result;
}

int main()
{
    int base, exp, ans;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    ans = power(base, exp);
    printf("%d raised to the power %d is %d\n", base, exp, ans);
    
}
