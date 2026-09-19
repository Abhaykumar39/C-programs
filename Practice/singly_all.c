#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insertAtBeg(struct node *head, int element)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
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

struct node *insertAtLast(struct node *head, int element)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = element;
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

struct node *insertAtPos(struct node *head, int pos, int element)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = element;
    p->next = NULL;

    if (pos == 1)
    {
        p->next = head;
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
        temp->next = p;
    }
    return head;
}

struct node *deleteAtbeg(struct node *head)
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("Linked List is empty ");
    }
    else
    {
        head = head->next;
        free(temp);
    }
    return head;
}

struct node *deleteAtMid(struct node *head, int pos)
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("Linked List is empty ");
    }
    if (pos == 1)
    {
        head = head->next;
        free(head);
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
        free(temp);
    }
    return head;
}

struct node *deleteAtLast(struct node *head)
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("Linked List is empty ");
    }
    else
    {
        struct node *prev = NULL;
        while (temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        free(temp);
        prev->next = NULL;
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

struct node *reverse(struct node *head)
{
    struct node *current = head;
    struct node *prevNode = NULL;
    struct node *nextNode = NULL;

    while (current != NULL)
    {
        nextNode = current->next;
        current->next = prevNode;
        prevNode = current;
        current = nextNode;
    }

    return prevNode;
}
int main()
{
    struct node *head = NULL;
    int value, choice, pos;

    do
    {
        printf("\n1.Insert At Begin\n2.Insert At Mid\n3.Insert At Last\n4.Delete At Begin\n5.Delete At Mid\n6.Delete At Last\n7.Display\n8.Reverse\nEnter your Choice ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the Value: ");
            scanf("%d", &value);
            head = insertAtBeg(head, value);
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

            head = insertAtLast(head, value);
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

        case 8:
            head = reverse(head);
            break;
        }

    } while (choice <= 8);

    return 0;
}