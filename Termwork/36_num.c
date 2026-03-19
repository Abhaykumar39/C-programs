#include <stdio.h>

void printNumbers(int n)
{
    if (n > 5)
        return;
    printf("%d ", n);
    printNumbers(n + 1);
}

int main()
{
    printf("Numbers from 1 to 5: ");
    printNumbers(1);
    
}
