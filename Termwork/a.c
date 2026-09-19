#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* insert(struct node* root,int element)
{
    if(root==NULL)
    {
        struct node *p=(struct node*)malloc(sizeof(struct node));
        p->data=element;
        p->left=NULL;
        p->right=NULL;
        return p;
    }
    else
    {
        if(element<root->data)
        {
            root->left=insert(root->left,element);
        }
        else
        {
            root->right=insert(root->right,element);
        }
    }

    return root;
}