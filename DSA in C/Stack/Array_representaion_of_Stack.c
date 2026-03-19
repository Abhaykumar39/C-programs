#include <stdio.h>
#define max 5

int push(int arr[], int top, int element)
{
    if (top == max - 1)
    {
        printf("Stack is full ");
    }
    else
    {
        top++;
        arr[top] = element;
    }
    return top;
}

int pop(int arr[], int top)
{
    if (top == -1)
    {
        printf("\nStack is Empty");
    }
    else
    {
        printf("The pop element is %d", arr[top]);
        top--;
    }
    return top;
}

void traverse(int arr[], int top)
{
    printf("Stack Elements are: ");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", arr[i]);
    }
}

void peek(int arr[], int top)
{
    if (top == -1)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("The peek element is: %d", arr[top]);
    }
}
int main()
{
    int top = -1, choice, element;
    int arr[max];

    do
    {
        printf("1.push \n 2.pop\n 3.traverse\n 4.peek\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element: ");
            scanf("%d", &element);
            top = push(arr, top, element);
            break;

        case 2:
            top = pop(arr, top);
            break;

        case 3:
            traverse(arr, top);
            break;

        case 4:
            peek(arr, top);
            break;
        }

    } while (choice <= 4);
}