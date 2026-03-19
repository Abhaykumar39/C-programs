#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// Insert at beginning
struct node *insertAtBeg(struct node *head, int element)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = element;

    if (head == NULL)
    {
        p->next = p;
        head = p;
    }
    else
    {
        struct node *temp = head;

        while (temp->next != head)
            temp = temp->next;

        p->next = head;
        temp->next = p;
        head = p;
    }

    return head;
}

// Insert at end
struct node *insertAtEnd(struct node *head, int element)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = element;

    if (head == NULL)
    {
        p->next = p;
        head = p;
    }
    else
    {
        struct node *temp = head;

        while (temp->next != head)
            temp = temp->next;

        temp->next = p;
        p->next = head;
    }

    return head;
}

// Insert at position
struct node *insertAtPos(struct node *head, int element, int pos)
{
    if (pos == 1)
        return insertAtBeg(head, element);

    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = element;

    struct node *temp = head;

    for (int i = 1; i < pos - 1 && temp->next != head; i++)
        temp = temp->next;

    p->next = temp->next;
    temp->next = p;

    return head;
}

// Delete at beginning
struct node *deleteAtBeg(struct node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return head;
    }

    struct node *temp = head;

    // Only one node
    if (head->next == head)
    {
        free(head);
        return NULL;
    }

    struct node *last = head;

    while (last->next != head)
        last = last->next;

    head = head->next;
    last->next = head;

    free(temp);
    return head;
}

// Delete at end
struct node *deleteAtEnd(struct node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return head;
    }

    // Only one node
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

// Delete at position
struct node *deleteAtPos(struct node *head, int pos)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return head;
    }

    if (pos == 1)
        return deleteAtBeg(head);

    struct node *temp = head;
    struct node *prev = NULL;

    for (int i = 1; i < pos && temp->next != head; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp->next == head && pos > 1)
    {
        prev->next = head;
        free(temp);
        return head;
    }

    prev->next = temp->next;
    free(temp);

    return head;
}

// Traverse
void traverse(struct node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    struct node *temp = head;

    printf("Elements: ");
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("\n");
}

int main()
{
    struct node *head = NULL;
    int choice, element, pos;

    do
    {
        printf("\n1.Insert at beginning");
        printf("\n2.Insert at end");
        printf("\n3.Insert at position");
        printf("\n4.Delete at beginning");
        printf("\n5.Delete at end");
        printf("\n6.Delete at position");
        printf("\n7.Traverse");
        printf("\n8.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter element: ");
            scanf("%d", &element);
            head = insertAtBeg(head, element);
            break;

        case 2:
            printf("Enter element: ");
            scanf("%d", &element);
            head = insertAtEnd(head, element);
            break;

        case 3:
            printf("Enter element: ");
            scanf("%d", &element);
            printf("Enter position: ");
            scanf("%d", &pos);
            head = insertAtPos(head, element, pos);
            break;

        case 4:
            head = deleteAtBeg(head);
            break;

        case 5:
            head = deleteAtEnd(head);
            break;

        case 6:
            printf("Enter position: ");
            scanf("%d", &pos);
            head = deleteAtPos(head, pos);
            break;

        case 7:
            traverse(head);
            break;

        case 8:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice\n");
        }

    } while (choice != 8);

    return 0;
}