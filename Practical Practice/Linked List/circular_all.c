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

    if (head == NULL)
    {
        head = p;
        p->next = head;
    }
    else
    {
        struct node *temp = head;

        while (temp->next != head)
        {
            temp = temp->next;
        }

        p->next = head;
        temp->next = p;
        head = p;
    }

    return head;
}

struct node *insertAtPos(struct node *head, int pos, int element)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));

    p->data = element;

    if (head == NULL || pos == 1)
    {
        return insertAtbeg(head, element);
    }

    struct node *temp = head;

    for (int i = 1; i < pos - 1 && temp->next != head; i++)
    {
        temp = temp->next;
    }

    p->next = temp->next;
    temp->next = p;

    return head;
}

struct node *insertAtEnd(struct node *head, int value)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));

    p->data = value;

    if (head == NULL)
    {
        head = p;
        p->next = head;
    }
    else
    {
        struct node *temp = head;

        while (temp->next != head)
        {
            temp = temp->next;
        }

        temp->next = p;
        p->next = head;
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

    if (head->next == head)
    {
        free(head);
        return NULL;
    }

    struct node *temp = head;
    struct node *last = head;

    while (last->next != head)
    {
        last = last->next;
    }

    head = head->next;
    last->next = head;

    free(temp);

    return head;
}

struct node *deleteAtMid(struct node *head, int pos)
{
    if (head == NULL)
    {
        printf("Linked list is empty ");
        return head;
    }

    if (pos == 1)
    {
        return deleteAtbeg(head);
    }

    struct node *temp = head;
    struct node *prev = NULL;

    for (int i = 1; i < pos && temp->next != head; i++)
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
    if (head == NULL)
    {
        printf("Linked list is empty ");
        return head;
    }

    if (head->next == head)
    {
        free(head);
        return NULL;
    }

    struct node *temp = head;
    struct node *prev = NULL;

    while (temp->next != head)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = head;

    free(temp);

    return head;
}

void display(struct node *head)
{
    if (head == NULL)
    {
        printf("Linked List is empty ");
        return;
    }

    struct node *temp = head;

    do
    {
        printf("%d ", temp->data);
        temp = temp->next;

    } while (temp != head);
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