#include <stdio.h>
// 1. Swap two number
/* int main()
{

    int a, b;
    printf("Enter the two number: ");
    scanf("%d%d", &a, &b);

    printf("Before Swapping a=%d and b=%d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("After Swapping a=%d and b=%d", a, b);
}

*/

// 2.Leap year
/*
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);

    if((year%4==0 && year%100!=0)||(year%400==0))
    {
        printf("%d is a leap year",year);
    }
    else{
        printf("%d is not leap year",year);
    }
}

*/

// 3. Largest of two number
/*
int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);

    if (a > b)
    {
        printf("%d is greater", a);
    }
    else
    {
        printf("%d is greater", b);
    }

}
*/

// 4.Multiple of 3 and 7
/*
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if (num % 3 == 0 && num % 7 == 0)
    {
        printf("%d is a multiple of 3 and 5",num);
    }
    else
    {
        printf("%d is not a multiple of 3 and 5",num);
    }
}
    */

// 5.even odd using bitwise operator
/*
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num & 1)
    {
        printf("%d is odd",num);
    }
    else
    {
        printf("%d is even",num);
    }
}

*/

// 6.Multiplication table of 4 using bitwise
/*
int main()
{

    for (int i = 1; i <= 10; i++)
    {
        int result = i << 2;
        printf("4 x %d = %d\n", i, result);
    }
}

*/

// 7. Divide a given number by 2 using bitwise
/*
int main()
{
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);

    int result = num >> 1;

    printf("Result: %d", result);
}

*/

// 8.Multiply a given number by 2
/*
int main()
{
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);

    int result = num << 1;

    printf("Multiply by 2= %d", result);
}

*/

// 9.convert second into days,hours,minutes,remaining seconds
/*
int main()
{
    int second;
    printf("Enter the second: ");
    scanf("%d", &second);

    int days = second / (60 * 60 * 24);
    second = second % (60 * 60 * 24);

    int hours = second / (60 * 60);
    second = second % (60 * 60);

    int minutes = second / 60;
    int rem_seconds = second / 60;

    printf("days= %d\n hours=%d\n minutes=%d\n remaining_seconds=%d", days, hours, minutes, rem_seconds);
}
*/

// 10.sum of digit
/*
int main()
{
    int num, sum = 0;
    printf("Enter a num: ");
    scanf("%d", &num);

    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }

    printf("Sum of digit=%d", sum);
}

*/

// 11.Reverse of a number
/*
int main()
{
    int num, rev = 0;
    printf("Enter a num: ");
    scanf("%d", &num);

    while (num != 0)
    {
        rev = (rev * 10) + num % 10;
        num = num / 10;
    }
    printf("Reverse=%d", rev);
}

*/

// 12.Multiplication table
/*
int main()
{
    int num;
    printf("Enter a number for table: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, (num * i));
    }
}

*/

// 13.Power of number
/*
int main()
{
    int num,exp,result=1;
    printf("Enter a base: ");
    scanf("%d", &num);

    printf("Enter a exponent: ")
    scanf("%d",&exp);

    for(int i=1;i<=exp;i++)
    {
        result=result*num;
    }
    printf("%d power %d is %d",num,exp,result);
}

*/

// 14.Palindrome
/*
int main()
{
    int num, rev = 0;
    printf("Enter a num: ");
    scanf("%d", &num);

    int match = num;

    while (num != 0)
    {
        rev = (rev * 10) + num % 10;
        num = num / 10;
    }

    if (match == rev)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not a Palindrome Number");
    }
}
    */

// 15.Function binary to decimal
/*
int con_decimal(int binary)
{
    int rem,decimal=0;
    while(binary!=0)
    {
        rem=binary%10;
        decimal=decimal*2+rem;
        binary/=10;
    }
    return decimal;
}
*/

// 16. Function calcculator
/*
int cal(int a, int b, char op)
{
    if (op == '+')
    {
        return a + b;
    }
    else if (op == '-')
    {
        return a - b;
    }
    else if (op == '*')
    {
        return a * b;
    }
    else if (op == '/')
    {
        return a / b;
    }
}
    */

// 17.Factorial of a number
int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

// 18.Multiplication of a number
void multi(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", n * i);
    }
}

// 19.Reverse of a number
int reverse(int n)
{
    int rev = 0;
    while (n != 0)
    {
        rev = (rev * 10) + n % 10;
        n /= 10;
    }
    return rev;
}

// 20.Power of a number
int power(int base, int exponent)
{
    int result = 1;
    for (int i = 1; i <= exponent; i++)
    {
        result = result * base;
    }
    return result;
}

// 21.Even or Odd
void evenOdd(int n)
{
    if (n % 2 == 0)
    {
        printf("%d is even", n);
    }
    else
    {
        printf("%d is odd", n);
    }
}

// 22.Prime Number
void prime(int n)
{
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not a Prime Number");
    }
}

// 23.Swap two number
void swap_using_third(int a, int b)
{
    printf("Before Swaping a=%d and b=%d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("After Swaping a=%d and b=%d\n", a, b);
}

// 24. Swap without third
void swap_without_third(int a, int b)
{
    printf("Before Swaping a=%d and b=%d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swaping a=%d and b=%d\n", a, b);
}

// 25.Fibonacci Series
void fibonacci(int n)
{
    int a = 0, b = 1;
    int temp;
    for (int i = 1; i <= n; i++)
    {
        printf(" %d", a);
        temp = a + b;
        a = b;
        b = temp;
    }
}

// 26 HCF Of a number
int hcf_number(int n1, int n2)
{
    int hcf = 0;
    int max = (n1 > n2) ? n1 : n2;

    for (int i = 1; i <= max; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }

    return hcf;
}

// 27 LCM of a number
int lcm_number(int n1, int n2)
{
    int hcf = 0;
    int max = (n1 > n2) ? n1 : n2;

    for (int i = 1; i <= max; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }

    int lcm = (n1 * n2) / hcf;
    return lcm;
}

// 28. All factors
void factors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf(" %d", i);
        }
    }
}

// 29.Positive Negative
void pos_neg(int n)
{
    if (n > 0)
    {
        printf("%d is positive", n);
    }
    else if (n < 0)
    {
        printf("%d is negative", n);
    }
    else
        printf("Number is zero");
}

// Factorial of a number using recursion
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

// Fibonacci series using recursion
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    return fibo(n - 1) + fibo(n - 2);
}

void printNum(int n)
{
    if (n == 0)
    {
        return;
    }

    printNum(n - 1);
    printf(" %d", n);
}

// HCF using recursion
int hcf(int n1, int n2)
{
    if (n2 == 0)
    {
        return n1;
    }
    return hcf(n2, n1 % n2);
}

// Reverse
int revNum(int n, int rev)
{
    if (n == 0)
    {
        return rev;
    }
    rev = (rev * 10) + n % 10;
    return revNum(n / 10, rev);
}


int main()
{
    //     // binary to decimal
    //    int result=con_decimal(1010);
    //    printf("Decimal=%d",result);

    // Calculator
    // int result = cal(20, 10, '+');
    // printf("Result=%d", result);

    // Factorial
    //  int result=factorial(5);
    //  printf("Factorial=%d", result);

    // Mutiplication
    // multi(10);

    // Reverse
    // int result = reverse(321);
    // printf("Reverse:%d", result);

    // Power
    //  int result=power(2,3);
    //  printf("Power:%d", result);

    // Even Odd
    // evenOdd(30);

    // Prime
    // prime(7);

    // Swap third
    // swap_using_third(20, 30);

    // Swap without third
    // swap_without_third(50, 60);

    // Fibonacci Series
    // fibonacci(8);

    // HCF
    // int result = hcf_number(12, 18);
    // printf("HCF:%d", result);

    // // LCM
    // int result = lcm_number(12, 18);
    // printf("LCM:%d", result);

    // Factors
    //  factors(30);

    // Positive Negative
    // pos_neg(-5);

    // factorial using recursion
    //  int result=fact(5);
    //   printf("Factorial:%d", result);

    // Fibonacci series:
    //  for (int i = 0; i <= 8; i++)
    //  {
    //      int result = fibo(i);
    //      printf(" %d", result);
    //  }

    // Print 1 to n
    // printNum(5);

    // HCF using recursion
    // int result = hcf(18, 12);
    // printf(" %d", result);

    // Reverse
    int result = revNum(234, 0);
    printf(" %d", result);
}