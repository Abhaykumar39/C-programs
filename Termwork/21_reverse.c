#include <stdio.h>

int reverseNumber(int n)
{
    int reverse = 0;
    while (n != 0)
    {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }
    return reverse;
}

int main()
{
    int num, rev;
    printf("Enter a number: ");
    scanf("%d", &num);
    rev = reverseNumber(num);
    printf("Reverse of %d is %d\n", num, rev);
    return 1;
}
