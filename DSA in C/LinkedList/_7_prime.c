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

void checkPrime(struct node *head)
{
    struct node *prime = NULL;
    struct node *temp = head;
    while (temp != NULL)
    {
        int count = 0;
        for (int i = 1; i <= temp->data; i++)
        {
            if (temp->data % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            prime = insert(prime, temp->data);
        }
        temp = temp->next;
    }

    printf("Prime Number in the List are: ");
    while (prime != NULL)
    {
        printf("%d ", prime->data);
        prime = prime->next;
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

    checkPrime(head);
}