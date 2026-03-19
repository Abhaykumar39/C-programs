#include <stdio.h>
#define max 5

void push(int arr[], int *top, int element)
{
    if (*top == max - 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        (*top)++;
        arr[*top] = element;
    }
}

void pop(int arr[], int *top)
{
    if (*top == -1)
    {
        printf("\nStack is Empty");
    }
    else
    {
        printf("The pop element is %d\n", arr[*top]);
        (*top)--;
    }
}

void traverse(int arr[], int *top)
{
    printf("Stack Elements are: ");
    for (int i = 0; i <= *top; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void peek(int arr[], int *top)
{
    if (*top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("The peek element is: %d\n", arr[*top]);
    }
}

int main()
{
    int top = -1, choice, element;
    int arr[max];

    do
    {
        printf("\n1.push \n2.pop\n3.traverse\n4.peek\n5.exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element: ");
            scanf("%d", &element);
            push(arr, &top, element);
            break;

        case 2:
            pop(arr, &top);
            break;

        case 3:
            traverse(arr, &top);
            break;

        case 4:
            peek(arr, &top);
            break;
        }

    } while (choice != 5);
}