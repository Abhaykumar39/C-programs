#include <stdio.h>
#define max 5

int enqueue(int arr[], int rear, int element)
{
    if (rear == max - 1)
    {
        printf("Queue is Full ");
    }
    else
    {
        rear++;
        arr[rear] = element;
    }

    return rear;
}

int dequeue(int arr[], int front, int rear)
{
    if (front == -1 && rear == -1 || front > rear)
    {
        printf("Queue is empty \n");
    }
    else
    {
        printf("The Dequeue Element is %d\n", arr[front]);
        front++;
    }
    return front;
}

void peek(int arr[], int front)
{
    printf("The peek element is %d", arr[front]);
}

void display(int arr[], int front, int rear)
{
    printf("Queue elements are: ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[max], front = -1, rear = -1, element;
    int choice;

    do
    {
        printf("1.Enqueue \n 2.Dequeue \n 3.Peek \n 4.Display \n ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element you want to insert: ");
            scanf("%d", &element);
            rear = enqueue(arr, rear, element);
            if (front == -1)
            {
                front = 0;
            }
            break;

        case 2:
            front = dequeue(arr, front, rear);
            break;

        case 3:
            peek(arr, front);
            break;

        case 4:
            display(arr, front, rear);
            break;
        }
    } while (choice <= 4);
}