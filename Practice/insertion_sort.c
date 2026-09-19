#include <stdio.h>

void insertionSort(int arr[], int n)
{
    int j=0;
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
             j = j - 1;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    int n = 5;
    int arr[n];
    printf("Enter the Elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n);

    printf("After Sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}