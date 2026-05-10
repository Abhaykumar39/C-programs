#include <stdio.h>
#define max 10

int push(int arr[], int top, int element)
{
    if (top == max - 1)
    {
        printf("\nStack is Full ");
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
        printf("/n Stack is empty");
    }
    else
    {
        printf("element is pop from stack is %d", arr[top]);
        top--;
    }
    return top;
}

void peek(int arr[], int top)
{
    if (top == -1)
    {
        printf("Stack is empty ");
    }
    else
    {
        printf("The peek element is : %d", arr[top]);
    }
}

void display(int arr[], int top)
{
    printf("Elements in the stack are: ");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[max], top = -1, element;
    int choice;

    do
    {
        printf("1.Push \n 2.Pop \n 3.Peek \n  4.Display \n ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element you want to insert: ");
            scanf("%d", &element);
            top = push(arr, top, element);
            break;

        case 2:
            top = pop(arr, top);
            break;

        case 3:
            peek(arr, top);
            break;

        case 4:
            display(arr, top);
            break;
        }
    } while (choice <= 4);
}