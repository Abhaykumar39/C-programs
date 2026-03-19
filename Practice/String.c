// #include <stdio.h>

// int main()
// {
//     char n[40];
//     int length = 0;
//     int space = 0;

//     printf("Enter a name: ");
//     gets(n);

//     for(int i = 0; n[i] != '\0'; i++)
//     {
//         if(n[i] == ' ')
//             space++;

//         length++;
//     }

//     printf("Length without spaces = %d", length - space);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

// Reverse
//  int main()
//  {
//      char str[30];
//      puts("Enter a String: ");
//      gets(str);

//     for(int i=strlen(str)-1;i>=0;i--)
//     {
//         printf("%c",str[i]);
//     }
// }

// Vowel and Consonent
// int main()
// {
//     char str[30];
//     puts("Enter a String: ");
//     gets(str);

//     int vowel = 0;
//     int consonent = 0;

//     for (int i = 0; i < strlen(str); i++)
//     {
//         if (str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'I' || str[i] == 'U')
//         {
//             vowel++;
//         }
//         else
//         {
//             consonent++;
//         }
//     }
//     printf("Vowel: %d", vowel);
//     printf("Consonent: %d", consonent);
// }

// Palindrome String
// int main()
// {
//     char str1[30];
//     char str2[30];

//     puts("Enter a String: ");
//     gets(str1);

//     int i = strlen(str1) - 1;
//     int j = 0;
//     while (i >= 0)
//     {
//         str2[j] = str1[i];
//         i--;
//         j++;
//     }
//     str2[j]='\0';

//     puts(str2);
//     puts(str1);
//     if (strcmp(str1, str2) == 0)
//     {
//         puts("Palindrome");
//     }
//     else
//     {
//         puts("Not a Palindrome");
//     }
// }

// Multiple name input and search a name
//  int main()
//  {
//      char n[5][40];
//      char s[40];

//     for(int i=0;i<=4;i++)
//     {
//        puts("Enter name: ");
//        gets(n[i]);
//     }

//     for(int i=0;i<=4;i++)
//     {
//         puts(n[i]);
//     }

//     puts("Enter String for search: ");
//     gets(s);

//     int found=0;
//     for(int i=0;i<=4;i++)
//     {
//         if(strcmp(n[i],s)==0)
//         {
//             found=1;
//             break;
//         }
//     }

//     if(found=1)
//     {
//         puts("Element found");
//     }
//     else
//     {
//         puts("Element not present");
//     }

// }

// Input N names and sort and display
#include <stdio.h>
#include <string.h>

int main()
{
    char n[3][40];
    char temp[40];

    // Input
    for (int i = 0; i < 3; i++)
    {
        puts("Enter name:");
        gets(n[i]);
    }

    // Sorting (Bubble Sort)
    for (int i = 0; i < 3 - 1; i++)
    {
        for (int j = 0; j < 3 - 1 - i; j++)
        {
            if (strcmp(n[j], n[j + 1]) > 0)
            {
                strcpy(temp, n[j]);
                strcpy(n[j], n[j + 1]);
                strcpy(n[j + 1], temp);
            }
        }
    }

    puts("\nSorted names:");
    for (int i = 0; i < 3; i++)
    {
        puts(n[i]);
    }

    return 0;
}
