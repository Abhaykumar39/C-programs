#include <stdio.h>
#define max 10

int insert(int arr[], int n, int element, int pos)
{
    if (n > max - 1)
    {
        printf("Array is Full");
    }
    if (pos > n + 1 || pos < 0)
    {
        printf("Invalid choice ");
    }

    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    return ++n;
}

int delete(int arr[], int n, int pos)
{
    if (n < 0)
    {
        printf("Array is empty");
    }

    for (int i = pos; i <= n; i++)
    {
        arr[i] = arr[i + 1];
    }
    return --n;
}

void searchElement(int arr[], int search, int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == search)
        {
            printf("Element Found at %d: ", i);
        }
    }
}

void display(int arr[], int n)
{
    printf("ELements are ");
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[max], n = -1, element, pos, search;
    int choice;

    do
    {
        printf("1.Insert \n 2.Delete \n 3.Search \n  4.Display \n ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element you want to insert: ");
            scanf("%d", &element);
            printf("Enter the position you want to insert: ");
            scanf("%d", &pos);
            n = insert(arr, n, element, pos);
            break;

        case 2:
            printf("Enter the position where you want to delete: ");
            scanf("%d", &pos);
            n = delete(arr, n, pos);
            break;

        case 3:
            printf("Enter the element you want to search: ");
            scanf("%d", &search);
            searchElement(arr, search, n);
            break;

        case 4:
            display(arr, n);
            break;
        }
    } while (choice <= 4);
}