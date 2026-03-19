#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *insertAtBegin(struct node *head, int element)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = element;
    p->next = NULL;
    if (head == NULL)
    {
        head = p;
    }
    else
    {
        p->next = head;
        head = p;
    }

    return head;
}
void traverse(struct node *head)
{
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int countNodes(struct node *head)
{
    struct node *temp;
    int count = 0;
    temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

void countPos_Neg_Zero(struct node *head)
{
    int pos = 0, neg = 0, zero = 0;
    struct node *temp = head;
    while (temp != NULL)
    {
        if (temp->data > 0)
        {
            pos++;
        }
        else if (temp->data == 0)
        {
            zero++;
        }
        else
        {
            neg++;
        }
        temp = temp->next;
    }
    printf("Positive Node = %d\n Negative Node =%d\n Zero Node=%d\n", pos, neg, zero);
}

int main()
{
    struct node *head = NULL;
    int element;
    int choice, count;

    do
    {
        printf("\n 1.Insert Node\n 2.Traverse 3.CountNodes 4.CheckType\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element: ");
            scanf("%d", &element);
            head = insertAtBegin(head, element);
            break;

        case 2:
            traverse(head);
            break;

        case 3:
            count = countNodes(head);
            printf("Total no. of Nodes are: %d", count);
            break;

        case 4:
            countPos_Neg_Zero(head);
            break;
        }
    } while (choice <= 4);
}