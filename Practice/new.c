#include <stdio.h>
// int main()
// {
//     int arr[6];
//     int length=6;

//     printf("Enter Elements: ");
//     for(int i=0;i<length;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("Array before reverse");
//     for(int i=0;i<length;i++)
//     {
//         printf(" %d",arr[i]);
//     }

//     int i=0;
//     int j=length-1;

//     while(i<=j)
//     {
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;

//         i++;
//         j--;
//     }

//     printf("Array After reverse");
//     for(int i=0;i<length;i++)
//     {
//         printf(" %d",arr[i]);
//     }
// }

// int hcf_num(int n1, int n2)
// {
//     if (n2 == 0)
//     {
//         return n1;
//     }

//     return hcf_num(n2, n1 % n2);
// }

// int main()
// {
//     int result = hcf_num(12, 18);
//     printf("%d", result);
// }

#include <stdio.h>

// int main()
// {
//     int arr1[] = {2, 3, 4, 5, 6, 7, 8, 10};
//     int arr2[100];
//     int k = 0;

//     for (int j = 0; j < 8; j++)
//     {
//         int count = 0;

//         for (int i = 1; i <= arr1[j]; i++)
//         {
//             if (arr1[j] % i == 0)
//             {
//                 count++;
//             }
//         }

//         if (count == 2)
//         {
//             arr2[k] = arr1[j];
//             k++;
//         }
//     }

//     printf("Prime numbers are:");
//     for (int i = 0; i < k; i++)
//     {
//         printf(" %d", arr2[i]);
//     }

//     return 0;
// }

// Min and max
int main()
{

    int arr[5]={10, 4, 2, 4, 5};

    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Largest Element: %d\n", arr[length - 1]);
    printf("Smallest Element: %d", arr[0]);
}