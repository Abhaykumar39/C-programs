#include <stdio.h>
#include <conio.h>
#define max 10

int push(int arr[], int top, int element)
{
    if (top == max - 1)
    {
        printf("Stack is Full ");
    }
    top++;
    arr[top] = element;
    return top;
}

int pop(int arr[], int top)
{
    if (top == -1)
    {
        printf("Stack is Empty");
    }
    printf("The pop element is %d ", arr[top]);
    top--;
    return top;
}

void peek(int arr[], int top)
{
    printf("The peek element is : %d ", arr[top]);
}

void display(int arr[], int top)
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[max];
    int top = -1;
    int choice, element;

    do
    {
        printf("\n1.Push\n2.Pop\n3.Peek\n4.display\nEnter Your Choice: ");
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
            peek(arr, top);
            break;

        case 4:
            display(arr, top);
            break;
        }
    } while (choice <= 4);
}