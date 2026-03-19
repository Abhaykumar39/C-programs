#include <stdio.h>
int main()
{
    int num, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;

    while (num != 0)
    {
        reverse = (reverse * 10) + num % 10;
        num = num / 10;
    }
 
    if(original==reverse)
    {
        printf("Palindrome Number ");
    }
    else
    {
        printf("Not a Palindrome Number ");
    }
    
}