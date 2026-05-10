#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *
insert(struct node *root, int value)
{
    if (root == NULL)
    {
        struct node *p = (struct node *)malloc(sizeof(struct node));
        p->data = value;
        p->left = NULL;
        p->right = NULL;
        return p;
    }

    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }

    return root;
}

void countNodes(struct node *root, int *count)
{
    if (root == NULL)
    {
        return;
    }

    (*count)++;
    countNodes(root->left, count);
    countNodes(root->right, count);
}

int main()
{
    struct node *root = NULL;
    int count = 0;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 45);

    countNodes(root, &count);
    printf("Total no of Nodes are: %d", count);
}