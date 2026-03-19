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

void checkOddEven(struct node *head)
{
    struct node *temp = head;
    struct node *Odd = NULL;
    struct node *Even = NULL;

    while (temp != NULL)
    {
        if (temp->data % 2 == 0)
        {
            Even = insert(Even, temp->data);
        }
        else
        {
            Odd = insert(Odd, temp->data);
        }

        temp = temp->next;
    }

    printf("Odd List: ");
    while (Odd != NULL)
    {
        printf("%d ", Odd->data);
        Odd = Odd->next;
    }

    printf("\nEven List: ");
    while (Even != NULL)
    {
        printf("%d ", Even->data);
        Even = Even->next;
    }
}
int main()
{
    struct node *head = NULL;
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);

    checkOddEven(head);
}