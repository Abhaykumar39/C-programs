#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insert(struct node *head, int element)
{
    struct node *p, *temp;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = element;
    p->next = NULL;

    if (head == NULL)
        head = p;
    else
    {
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = p;
    }

    return head;
}

struct node* reverse(struct node *head)
{
    struct node *prevNode = NULL;
    struct node *currentNode = head;
    struct node *nextNode = NULL;

    while(currentNode != NULL)
    {
        nextNode = currentNode->next;
        currentNode->next = prevNode;
        prevNode = currentNode;
        currentNode = nextNode;
    }

    return prevNode;
}

void traverse(struct node *head)
{
    struct node *temp = head;

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    struct node *head = NULL;

    head = insert(head, 7);
    head = insert(head, 4);
    head = insert(head, 5);
    head = insert(head, 13);
    head = insert(head, 11);

    printf("Original List: ");
    traverse(head);

    head = reverse(head);

    printf("\nReversed List: ");
    traverse(head);
}