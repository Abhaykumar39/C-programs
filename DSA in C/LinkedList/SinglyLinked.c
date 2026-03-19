#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *insertAtBeg(struct node *start, int num)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = num;
    p->next = NULL;

    if (start == NULL)
    {
        start = p;
    }
    else
    {
        p->next = start;
        start = p;
    }

    return start;
}

int main()
{
    int choice, num;
    struct node *start = NULL;
    do
    {

        printf("Enter the choice: ");
            scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter a number to insert: ");
            scanf("%d", &num);
            start = insertAtBeg(start, num);
            break;

        default:
            break;
        }
    } while (choice != 0);
}

