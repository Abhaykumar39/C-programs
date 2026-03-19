#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *insertAtlast(struct node *head, int element)
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

struct node *concat(struct node *head, struct node *head1)
{
    struct node *temp = head;
    if (head == NULL)
    {
        return head1;
    }
    if (head1 == NULL)
    {
        return head;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head1;

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
    struct node *head = NULL, *temp, *head1 = NULL;
    head1 = insertAtlast(head1, 100);
    head1 = insertAtlast(head1, 200);
    head1 = insertAtlast(head1, 300);
    head = insertAtlast(head, 10);
    head = insertAtlast(head, 20);
    head = insertAtlast(head, 30);

    head = concat(head, head1);

    traverse(head);
}