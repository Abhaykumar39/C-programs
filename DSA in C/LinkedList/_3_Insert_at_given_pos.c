#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *insertAtPos(struct node *head, int pos, int element)
{
    struct node *temp, *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = element;
    p->next = NULL;
    if (head == NULL)
    {
        head = p;
    }
    else if (pos == 1)
    {
        p->next = head;
        head = p;
    }
    else
    {
        temp = head;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        p->next = temp->next;
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
    int element, pos;
    int choice;
    do
    {
        printf("\n1.Insert \n 2.Traverse\n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter the position where you want to  insert: ");
            scanf("%d", &pos);
            printf("Enter the element ");
            scanf("%d", &element);
            head = insertAtPos(head, pos, element);
        }
        else if (choice == 2)
        {
            traverse(head);
        }

    } while (choice != 3);
}