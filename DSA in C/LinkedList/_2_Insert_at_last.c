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
    int element;
    int choice;
    do
    {
        printf("\n1.Insert \n 2.Traverse\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter the element ");
            scanf("%d", &element);
            head = insertAtlast(head, element);
        }
        else if (choice == 2)
        {
            traverse(head);
        }

    } while (1);
}