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

struct node *deletionAtBeg(struct node *head)
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("Linked List is empty\n");
    }
    else
    {
        head = head->next;

        if (head != NULL)
            head->prev = NULL;

        free(temp);
    }
    return head;
}

struct node *deletionAtLast(struct node *tail)
{
    struct node *temp = tail;
    if (tail == NULL)
    {
        printf("Linked List is empty\n");
    }
    else
    {
        tail = tail->prev;

        if (tail != NULL)
            tail->next = NULL;

        free(temp);
    }
    return tail;
}

struct node *deletionAtPos(struct node *head, int pos)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return head;
    }

    struct node *temp = head;

    // Case 1: delete first node
    if (pos == 1)
    {
        head = head->next;

        if (head != NULL)
            head->prev = NULL;

        free(temp);
        return head;
    }

    struct node *prev = NULL;

    for (int i = 1; i < pos; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = temp->next;

    if (temp->next != NULL)
        temp->next->prev = prev;

    free(temp);

    return head;
}
void traverse(struct node *head)
{
    struct node *temp = head;

    printf("Elements: ");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct node *head = NULL, *tail = NULL;
    int element, choice;

    do
    {
        printf("\n1.Insert at beg\n2.Traverse\n3.Delete at begin\n4.Delete at last\n5.Delete at position\nEnter your choice: ");
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
            head = deletionAtBeg(head);

            if (head == NULL)
                tail = NULL;

            break;

        case 4:
            tail = deletionAtLast(tail);

            if (tail == NULL)
                head = NULL;

            break;

        case 5:
        {
            int pos;
            printf("Enter position: ");
            scanf("%d", &pos);

            head = deletionAtPos(head, pos);

            if (head == NULL)
                tail = NULL;

            break;
        }
        }
    } while (choice <= 5);
}