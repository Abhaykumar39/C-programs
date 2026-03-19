#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *push(struct node head, int element)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = element;
    p->next = NULL;
    struct node *temp;
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

struct node *pop(struct node *head)
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
    free(temp);
    prev->next = NULL;
    return head;
}

void traverse(struct node *head)
{
    struct node *temp = head;
    printf("List contains: ");
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
        printf("\n 1.Push\n 2.Pop\n 3.Traverse\n ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element: ");
            scanf("%d", &element);
            head = push(head, element);
            break;

        case 2:
            head = pop(head);
            break;

        case 3:
            traverse(head);
            break;
        }
        while (choice <= 3);
            
    }