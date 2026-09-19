#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *insertAtBeg(struct node *head, int element)
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
        p->next = head;
        head->prev = p;
        head = p;
    }
    return head;
}

struct node *insertAtPos(struct node *head, int element, int pos)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = element;
    p->next = NULL;
    p->prev = NULL;

    if (head == NULL || pos == 1)
    {
        p->next = head;
        head->prev = p;
        head = p;
    }
    else
    {
        struct node *temp = head;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        p->next = temp->next;
        p->prev = temp;
        if (temp->next != NULL)
        {
            temp->next->prev = p;
        }
        temp->next = p;
    }
    return head;
}

struct node *insertAtLast(struct node *head, int element)
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
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = p;
        p->prev = temp;
    }
    return head;
}

void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

struct node *deleteAtBeg(struct node *head)
{
    if (head == NULL)
    {
        printf("Linked list is empty ");
    }
    else
    {
        struct node *temp = head;
        head = head->next;
        free(temp);
    }
    return head;
}

struct node *deleteAtPos(struct node *head, int pos)
{
    struct node *temp = head;
    if (head == NULL || pos == 1)
    {
        head = head->next;
        free(temp);
    }
    else
    {
        struct node *prev = NULL;
        for (int i = 1; i < pos; i++)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        if (temp->next != NULL)
        {
            temp->next->prev = prev;
        }
    }
    return head;
}

struct node *deleteAtlast(struct node *head)
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("Linked list is empty ");
    }
    else
    {
        struct node *prev = NULL;
        while (temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
    }
    return head;
}
int main()
{
    struct node *head = NULL;

    int value, choice, pos;

    do
    {
        printf("\n1.Insert At Begin\n2.Insert At Mid\n3.Display\n4.Insert At Last\n5.Delete At Begin\n6.Delete At Mid\n7.Delete At Last\nEnter your Choice ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("Enter the element: ");
            scanf("%d", &value);
            head = insertAtBeg(head, value);
            break;

        case 2:

            printf("Enter the element: ");
            scanf("%d", &value);
            printf("Enter the position: ");
            scanf("%d", &pos);
            head = insertAtPos(head, value, pos);
            break;

        case 3:
            display(head);
            break;

        case 4:
            printf("Enter the element: ");
            scanf("%d", &value);
            head = insertAtLast(head, value);
            break;

        case 5:
            head = deleteAtBeg(head);
            break;

        case 6:
            printf("Enter the position: ");
            scanf("%d", &pos);
            head = deleteAtPos(head, pos);
            break;

        case 7:
            head = deleteAtlast(head);
            break;
        }

    } while (choice <= 7);

    return 0;
}