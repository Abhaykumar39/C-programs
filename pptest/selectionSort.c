#include <stdio.h>

void selectionSort(int arr[], int n)
{
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int n;
    printf("Enter the Size of Array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the Elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, n);

    printf("Sorting Array ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}