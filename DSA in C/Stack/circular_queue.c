#include <stdio.h>
#define MAX 5
int front = -1, rear = -1;
int arr[MAX];

// Enqueue
void enqueue(int x)
{
    if ((rear + 1) % MAX == front)
    {
        printf("Queue is Full\n");
    }
    else if (front == -1)
    {
        front = rear = 0;
        arr[rear] = x;
    }
    else
    {
        rear = (rear + 1) % MAX;
        arr[rear] = x;
    }
}

// Dequeue
void dequeue()
{
    if (front == -1)
    {
        printf("Queue is Empty\n");
    }
    else if (front == rear)
    {
        printf("Deleted: %d\n", arr[front]);
        front = rear = -1;
    }
    else
    {
        printf("Deleted: %d\n", arr[front]);
        front = (front + 1) % MAX;
    }
}

// Peek
void peek()
{
    if (front == -1)
        printf("Queue is Empty\n");
    else
        printf("Front: %d\n", arr[front]);
}

// Display
void display()
{
    if (front == -1)
    {
        printf("Queue is Empty\n");
        return;
    }

    int i = front;
    while (1)
    {
        printf("%d ", arr[i]);
        if (i == rear)
            break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

// Main
int main()
{
    int ch, x;

    while (1)
    {
        printf("\n1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter element: ");
            scanf("%d", &x);
            enqueue(x);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }
}