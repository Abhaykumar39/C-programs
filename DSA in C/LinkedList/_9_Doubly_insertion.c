#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *insertAtbeg(struct node *head, int element)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));

    p->data = element;
    p->next = NULL;
    p->prev = NULL;

    if (head == NULL)
    {
        head = p;
    }
    else
    {
        head->prev = p;
        p->next = head;
        head = p;
    }

    return head;
}

struct node *insertAtLast(struct node *tail, int element)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));

    p->data = element;
    p->next = NULL;
    p->prev = NULL;

    if (tail == NULL)
    {
        tail = p;
    }
    else
    {
        p->prev = tail;
        tail->next = p;
        tail = p;
    }

    return tail;
}

struct node *insertAtPos(struct node *head, struct node *tail, int element, int pos)
{
    struct node *temp;
    struct node *p = (struct node *)malloc(sizeof(struct node));

    p->data = element;
    p->next = NULL;
    p->prev = NULL;

    if (head == NULL)
    {
        head = tail = p;
        return head;
    }

    temp = head;

    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    p->next = temp->next;
    p->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = p;

    temp->next = p;

    return head;
}

void traverse(struct node *head)
{
    struct node *temp = head;

    printf("elements: ");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct node *head = NULL, *tail = NULL;
    int element, choice, pos;

    do
    {
        printf("\n1.Insert at beg\n2.Traverse\n3.Insert At end\n4.Insert At Pos\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element: ");
            scanf("%d", &element);
            head = insertAtbeg(head, element);
            if (tail == NULL)
                tail = head;
            break;

        case 2:
            traverse(head);
            break;

        case 3:
            printf("Enter the element: ");
            scanf("%d", &element);
            tail = insertAtLast(tail, element);
            if (head == NULL)
                head = tail;
            break;

        case 4:
            printf("Enter position: ");
            scanf("%d", &pos);
            printf("Enter element: ");
            scanf("%d", &element);
            head = insertAtPos(head, tail, element, pos);
            break;
        }

    } while (choice <= 4);
}