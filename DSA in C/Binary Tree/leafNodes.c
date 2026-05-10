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

void rightNode(struct node *root, int *count)
{
    if (root == NULL)
        return;
    (*count)++;
    rightNode(root->left, count);
    rightNode(root->right, count);
}

int main()
{
    struct node *root = NULL;
    int count = 0;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 45);
    insert(root, 90);

    rightNode(root->right, &count);
    printf("Total no on the Right Side of root Node : %d", count);
}