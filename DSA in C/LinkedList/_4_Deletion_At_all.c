#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *
insertAtlast(struct node *head, int element)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    p->data = element;
    p->next = NULL;
    if (head == NULL)
    {
        head = p;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = p;
    }

    return head;
}

struct node *deleteAtBeg(struct node *head)
{
    struct node *temp = head;

    // If No element in list
    if (head == NULL)
    {
        printf("Linked List empty ");
        return head;
    }

    head = head->next;
    free(temp);

    return head;
}

struct node *deleteAtLast(struct node *head)
{
    struct node *temp = head;
    struct node *prev;
    if (head == NULL)
    {
        printf("Linked List empty ");
        return head;
    }
    // If only 1 element
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

struct node *deleteAtPos(struct node *head, int pos)
{
    struct node *temp = head;
    struct node *prev;
    if (head == NULL)
    {
        printf("Linked list is Empty ");
        return head;
    }
    // position = 1;
    if (pos == 1)
    {
        head = head->next;
        free(temp);
        return head;
    }
    for (int i = 1; i < pos; i++)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);

    return head;
}

void traverse(struct node *head)
{
    struct node *temp = head;
    printf("Linked List elements: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct node *head = NULL;
    int choice, element, pos;
    do
    {
        printf("\n 1.Insert\n 2.Delete At begin \n 3.Traverse\n 4.Delete At Last\n 5.delete At pos \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element: ");
            scanf("%d", &element);
            head = insertAtlast(head, element);
            break;

        case 2:
            head = deleteAtBeg(head);
            break;

        case 3:
            traverse(head);
            break;
        case 4:
            head = deleteAtLast(head);
            break;

        case 5:
            printf("enter the position: ");
            scanf("%d", &pos);
            head = deleteAtPos(head, pos);
            break;
        }
    } while (choice <= 5);
}
