#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* insert(struct node *head,int x)
{
    struct node *temp,*p;

    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;

    if(head==NULL)
        return temp;

    p=head;

    while(p->next!=NULL)
        p=p->next;

    p->next=temp;

    return head;
}

void display(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head=head->next;
    }
    printf("NULL\n");
}

void split(struct node *p,struct node **q,struct node **r)
{
    int pos=1;

    while(p!=NULL)
    {
        if(pos%2==1)
            *q=insert(*q,p->data);
        else
            *r=insert(*r,p->data);

        pos++;
        p=p->next;
    }
}

int main()
{
    struct node *P=NULL,*Q=NULL,*R=NULL;

    P=insert(P,10);
    P=insert(P,20);
    P=insert(P,30);
    P=insert(P,40);
    P=insert(P,50);

    split(P,&Q,&R);

    printf("List Q:\n");
    display(Q);

    printf("List R:\n");
    display(R);

    return 0;
}