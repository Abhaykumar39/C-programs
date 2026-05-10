#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *insertAtBeg(struct node *head, int element)
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

struct node *insertAtPos(struct node *head, int element, int pos)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));

    p->data = element;
    p->next = NULL;
    p->prev = NULL;

    struct node *temp = head;

    if (pos == 1)
    {
        p->next = head;

        if (head != NULL)
        {
            head->prev = p;
        }

        head = p;
    }
    else
    {
        for (int i = 1; i < pos - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }

        p->next = temp->next;
        p->prev = temp;

        if (temp->next != NULL)
        {
            temp->next->prev = p;
        }

        temp->next = p;
    }

    return head;
}

struct node *insertAtLast(struct node *head, int element)
{
    struct node *temp = head;
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
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        p->prev = temp->next;
        temp->next = p;
    }

    return head;
}

struct node *deleteAtBeg(struct node *head)
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("Linked list is empty ");
    }
    else
    {
        head = head->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        free(temp);
    }
    return head;
}

struct node* deleteAtPos(struct node *head, int pos)
{
    struct node *temp = head;
    struct node *temp1 = NULL;
    if (head == NULL)
    {
        printf("Linked List is Empty ");
    }
    else if (pos == 1)
    {
        head = head->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        free(temp);
    }
    else
    {
        for (int i = 1; i < pos; i++)
        {
            temp1 = temp;
            temp = temp->next;
        }
        temp1->next = temp->next;
        if (temp->next != NULL)
        {
            temp->next->prev = temp1;
        }
        free(temp);
    }
    return head;
}

struct node* deleteAtlast(struct node* head)
{
    struct node* temp=head;
    struct node* temp1=NULL;
   if(head==NULL)
   {
    printf("Linked List is Empty: ");
   }
   else
   {
      while(temp->next!=NULL)
      {
        temp1=temp;
        temp=temp->next;
      }

      temp1->next=NULL;
      free(temp);
   }
   return head;
}

void display(struct node *head)
{
    struct node *temp = head;

    if (head == NULL)
    {
        printf("Linked List is empty ");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    struct node *head = NULL;

    int value, choice, pos;

    do
    {
        printf("\n1.Insert At Begin\n2.Insert At Mid\n3.Display\n4.Insert At Last\n5.Delete At Begin\n6.Delete At Mid\n7.Delete At Last\nEnter your Choice ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("Enter the element: ");
            scanf("%d", &value);
            head = insertAtBeg(head, value);
            break;

        case 2:

            printf("Enter the element: ");
            scanf("%d", &value);
            printf("Enter the position: ");
            scanf("%d", &pos);
            head = insertAtPos(head, value, pos);
            break;

        case 3:
            display(head);
            break;

        case 4:
            printf("Enter the element: ");
            scanf("%d", &value);
            head = insertAtLast(head, value);
            break;

        case 5:
            head = deleteAtBeg(head);
            break;

        case 6:
            printf("Enter the position: ");
            scanf("%d", &pos);
            head = deleteAtPos(head, pos);
            break;
        
        case 7:
        head=deleteAtlast(head);
        break;
        }

    } while (choice <= 7);

    return 0;
}