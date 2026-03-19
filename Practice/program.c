#include <stdio.h>
#include <math.h>
void swaptwo()
{
    int a = 10, b = 20;
    printf("Before Swaping a=%d and b=%d \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swaping a=%d and b=%d", a, b);
}

void swapthree()
{
    int a = 10, b = 20;
    printf("Before Swaping a=%d and b=%d \n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("After Swaping a=%d and b=%d", a, b);
}

void multiple3and7()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 7 == 0)
    {
        printf("Multiple of 3 and 7");
    }
    else
    {
        printf("Not a Multiple of 3 and 7");
    }
}

void largesttwo()
{
    int a, b;
    printf("Enter the number: ");
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

void largestthree()
{
    int a, b, c;
    printf("Enter the number: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d is greater", a);
    }
    else if (b > a && b > c)
    {

        printf("%d is greater", b);
    }
    else
    {
        printf("%d is greater", c);
    }
}

void table()
{
    int n;
    printf("Enter a number who want the table : ");
    scanf("%d", &n);
    int i = 1;
    while (i <= 10)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
}

void oddevenbitand()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num & 1)
    {
        printf("%d is odd ", num);
    }
    else
    {
        printf("%d is even ", num);
    }
}

void oddevenbitor()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if ((num | 1) == num)
    {
        printf("%d is odd ", num);
    }
    else
    {
        printf("%d is even ", num);
    }
}

void oddeven()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is even ", num);
    }
    else
    {
        printf("%d is odd ", num);
    }
}

void table4()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        int result = num << 2;
        result = i << 2;
        printf("%d x %d = %d\n", num, i, result);
    }
}

void reverse()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reverse = 0;

    while (num != 0)
    {
        reverse = (reverse * 10) + num % 10;
        num = num / 10;
    }
    printf("Reverse = %d", reverse);
}

void sumofdigit()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sum = 0;
    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }

    printf("Sum = %d ", sum);
}

void seconds()
{
    long second;
    int days, hours, minutes, rem_seconds;
    printf("Enter the seconds: ");
    scanf("%ld", &second);

    days = second / (3600 * 24);
    second = second % (3600 * 24);

    hours = second / 3600;
    second = second % 3600;

    minutes = second / 60;
    rem_seconds = second % 60;

    printf("Days: %d ", days);
    printf("Hours: %d ", hours);
    printf("minutes: %d ", minutes);
    printf("Remaining Seconds: %d ", rem_seconds);
}

void positive_negative()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d is positive ", num);
    }
    else if (num == 0)
    {
        printf("%d is zero ", num);
    }
    else
    {
        printf("%d is negative ", num);
    }
}

void factorial()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int fact = 1;

    while (num != 0)
    {

        fact = fact * num;
        num--;
    }
    printf("Factorial : %d ", fact);
}

void palindrome()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reverse = 0;
    int original = num;

    while (num != 0)
    {
        reverse = (reverse * 10) + num % 10;
        num = num / 10;
    }

    if (reverse == original)
    {
        printf("Palindrome Number ");
    }
    else
    {
        printf("Not a Palindrome Number");
    }
}

void divide2()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = num >> 1;

    printf("%d", result);
}

void multiply2()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = num << 1;

    printf("%d", result);
}

void leap()
{
    int year;
    printf("Enter a year : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year ", year);
    }
    else
    {
        printf("%d is not  a leap year ", year);
    }
}

void power()
{
    int base, exponent;
    printf("Enter the base and exponent: ");
    scanf("%d%d", &base, &exponent);

    int result = 1;

    for (int i = 1; i <= exponent; i++)
    {
        result = result * base;
    }
    printf("%d raised to the power %d is %d  ", base, exponent, result);
}

void binaryToAll()
{
    int binary;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    int decimal = 0, remainder, i = 0;

    while (binary != 0)
    {
        remainder = binary % 10;
        decimal += remainder * pow(2, i);
        binary /= 10;
        i++;
    }
    printf("Decimal: %d \n ", decimal);
    printf("Octal: %o\n", decimal);
    printf("Hexadecimal: %x", decimal);
}

void hcfp()
{
    int num1, num2;
    printf("Enter a number: ");
    scanf("%d%d", &num1, &num2);

    int max = (num1 > num2) ? num1 : num2;

    int hcf = 0;

    for (int i = 1; i <= max; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    printf("HCF : %d", hcf);
}

void lcmp()
{
    int num1, num2;
    printf("Enter a number: ");
    scanf("%d%d", &num1, &num2);

    int max = (num1 > num2) ? num1 : num2;

    int hcf = 0;

    for (int i = 1; i <= max; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }

    int result = (num1 * num2) / hcf;

    printf("lcm : %d", result);
}

void primecheck()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int count = 0;
    for (int i = 1; i <= num; i++)
    {

        if (num % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        printf("Prime number ");
    }
    else
    {
        printf("Not a prime numer ");
        ;
    }
}
void primerange()
{
   

    for (int num = 1; num <= 20; num++)
    {
         int count = 0;
        for (int i = 1; i <= j; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d", num);
        }
    }
}

void []reverseArray(int []arr)
{
    int length=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=length;

    while(i!=j)
    {
        arr[j]=arr[i];
        i++;
        j--;
    }

    return arr;
}

int main()
{
    // swaptwo();
    // swapthree();
    // multiple3and7();
    // largesttwo();
    // largestthree();
    // table();
    // oddevenbitand();
    // oddevenbitor();
    // table4();
    // reverse();
    // sumofdigit();
    // seconds();
    // positive_negative();
    // factorial();
    // palindrome();
    // divide2();
    // multiply2();
    // power();
    // leap();
    // binaryToAll();
    // hcfp();
    // lcmp();
   //primecheck();
   primerange();
}