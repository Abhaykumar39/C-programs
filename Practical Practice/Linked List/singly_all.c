#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insertAtbeg(struct node *head, int value)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = value;
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

struct node *insertAtPos(struct node *head, int pos, int element)
{
    struct node *temp, *p;

    p = (struct node *)malloc(sizeof(struct node));
    p->data = element;
    p->next = NULL;

    if (head == NULL || pos == 1)
    {
        p->next = head;
        head = p;
    }
    else
    {
        temp = head;

        // Move to previous node
        for (int i = 1; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }
        p->next = temp->next;
        temp->next = p;
    }

    return head;
}

struct node *insertAtEnd(struct node *head, int value)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = value;
    p->next = NULL;

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
    }

    return head;
}

struct node *deleteAtbeg(struct node *head)
{
    if (head == NULL)
    {
        printf("Linked List is empty ");
        return head;
    }

    struct node *temp = head;
    head = head->next;
    free(temp);

    return head;
}

struct node *deleteAtMid(struct node *head, int pos)
{
    struct node *temp = head;
    struct node *prev = NULL;

    if (head == NULL)
    {
        printf("Linked list is empty ");
        return head;
    }

    if (pos == 1)
    {
        temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    for (int i = 1; i < pos && temp != NULL; i++)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);
    return head;
}

struct node *deleteAtLast(struct node *head)
{
    struct node *temp = head;
    struct node *prev = NULL;

    if (head == NULL)
    {
        printf("Linked list is empty ");
        return head;
    }

    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    free(temp);

    return head;
}

void display(struct node *head)
{
    struct node *temp = head;

    if (head == NULL)
    {
        printf("Linked List is empty ");
        return;
    }

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct node *head = NULL;
    int value, choice, pos;

    do
    {
        printf("\n1.Insert At Begin\n2.Insert At Mid\n3.Insert At Last\n4.Delete At Begin\n5.Delete At Mid\n6.Delete At Last\n7.Display\nEnter your Choice ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the Value: ");
            scanf("%d", &value);
            head = insertAtbeg(head, value);
            break;

        case 2:
            printf("Enter the Value: ");
            scanf("%d", &value);

            printf("Enter the position: ");
            scanf("%d", &pos);

            head = insertAtPos(head, pos, value);
            break;

        case 3:
            printf("Enter the Value: ");
            scanf("%d", &value);

            head = insertAtEnd(head, value);
            break;

        case 4:
            head = deleteAtbeg(head);
            break;

        case 5:
            printf("Enter the position: ");
            scanf("%d", &pos);

            head = deleteAtMid(head, pos);
            break;

        case 6:
            head = deleteAtLast(head);
            break;

        case 7:
            display(head);
            break;
        }

    } while (choice <= 7);

    return 0;
}