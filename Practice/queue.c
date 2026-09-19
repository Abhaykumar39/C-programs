#include <stdio.h>
#define max 5

int enqueue(int arr[], int rear, int element)
{
    if (rear == max - 1)
    {
        printf("Queue us Full ");
    }
    else
    {
        rear++;
        arr[rear] = element
    }
    return rear;
}

int dequeue(int arr[], int rear, int front)
{
    if (rear == -1 && front == -1)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("The dequeue element is: ", arr[front]);
        front++;
        if (front > rear)
        {
            front = 0;
        }
    }
    return front;
}

void display(int arr[], int rear, int front)
{
    for (int i = front; i <= rear; i++)
    {
        printf("%d", arr[i]);
    }
}

void peek(int arr[], int rear)
{
    printf("The peek element is %d", arr[rear]);
}
int main()
{
    int arr[max], rear = -1, front = -1;
    int choice, element;

    do
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.display\n4.peek\nEnter your choice ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the Element: ");
            scanf("%d", &element);
            rear = enqueue(arr, rear, element);
            if (front == -1)
            {
                front = 0;
            }
            break;

        case 2:
            front = dequeue(arr, rear, front);
            break;

        case 3:
            display(arr, rear, front);
            break;

        case 4:
            peek(arr, rear);
            break;
        }
    } while (choice <= 4);
}