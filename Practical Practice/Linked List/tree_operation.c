#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *insert(struct node *root, int element)
{
    if (root == NULL)
    {
        struct node *p = (struct node *)malloc(sizeof(struct node));
        p->data = element;
        p->left = NULL;
        p->right = NULL;
        return p;
    }
    if (element < root->data)
    {
        root->left = insert(root->left, element);
    }
    else
    {
        root->right = insert(root->right, element);
    }

    return root;
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

void countNodes(struct node *root, int *count)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        (*count)++;
        countNodes(root->left, count);
        countNodes(root->right, count);
    }
}

void leafNode(struct node *root, int *countleaf)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            (*countleaf)++;
        }
        leafNode(root->left, countleaf);
        leafNode(root->right, countleaf);
    }
}

void leftChildOnly(struct node *root, int *count)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        if (root->left != NULL && root->right == NULL)
        {
            (*count)++;
        }
        leftChildOnly(root->left, count);
        leftChildOnly(root->right, count);
    }
}
void rightChildOnly(struct node *root, int *count)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        if (root->left == NULL && root->right != NULL)
        {
            (*count)++;
        }
        rightChildOnly(root->left, count);
        rightChildOnly(root->right, count);
    }
}

void leftSubtree(struct node *root, int *count)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        (*count)++;
        leftSubtree(root->left, count);
    }
}

void rightSubtree(struct node *root, int *count)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        (*count)++;
        rightSubtree(root->right, count);
    }
}

void internalNodeCount(struct node *root, int *count)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        if (root->left != NULL || root->right != NULL)
        {
            (*count)++;
        }
        internalNodeCount(root->left, count);
        internalNodeCount(root->right, count);
    }
}

void largestData(struct node *root, int *max)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        if (root->data > *max)
        {
            *max = root->data;
        }
        largestData(root->left, max);
        largestData(root->right, max);
    }
}

void smallestData(struct node *root, int *min)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        if (root->data < *min)
        {
            *min = root->data;
        }
        smallestData(root->left, min);
        smallestData(root->right, min);
    }
}

void secondLargest(struct node *root, int *first, int *second)
{
    if (root == NULL)
    {
        return;
    }

    if (root->data > *first)
    {
        *second = *first;
        *first = root->data;
    }
    else if (root->data > *second && root->data != *first)
    {
        *second = root->data;
    }

    secondLargest(root->left, first, second);
    secondLargest(root->right, first, second);
}

int height(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    if (leftHeight > rightHeight)
    {
        return leftHeight + 1;
    }
    else
    {
        return rightHeight + 1;
    }
}

void commonParent(struct node *root, int *count)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left != NULL && root->right != NULL)
    {
        (*count)++;
    }

    commonParent(root->left, count);
    commonParent(root->right, count);
}

int main()
{
    struct node *root = NULL;
    root = insert(root, 10);
    insert(root, 12);
    insert(root, 2);
    insert(root, 11);
    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");
    int count = 0;
    countNodes(root, &count);
    printf("Total element are:%d ", count);

    // leaf Nodes
    printf("\n");
    count = 0;
    leafNode(root, &count);
    printf("Total element are:%d ", count);

    // Left Child Only
    printf("\n");
    count = 0;
    leftChildOnly(root, &count);
    printf("Total element are:%d ", count);

    // Right Child Only
    printf("\n");
    count = 0;
    rightChildOnly(root, &count);
    printf("Total element are:%d ", count);

    // left subtree
    printf("\n");
    count = 0;
    leftSubtree(root, &count);
    printf("Total element in left subtree:%d ", count);

    // right subtree
    printf("\n");
    count = 0;
    rightSubtree(root, &count);
    printf("Total element in right subtree:%d ", count);

    // Internal Node
    printf("\n");
    count = 0;
    internalNodeCount(root, &count);
    printf("Total element in Internal Node:%d ", count);

    // Largest Data
    printf("\n");
    int max = root->data;
    largestData(root, &max);
    printf("Largest Node :%d ", max);

    // Smallest Data
    printf("\n");
    int min = root->data;
    smallestData(root, &min);
    printf("Smallest Node :%d ", min);

    // Second Largest
    printf("\n");
    int first = root->data;
    int second = 0;
    secondLargest(root, &first, &second);
    printf("Second Largest Element : %d", second);

    // Height
    printf("\n");

    int h = height(root);

    printf("Height of BST : %d", h);

    // Common Parent Count
    printf("\n");
    count = 0;

    commonParent(root, &count);

    printf("Common Parent Count : %d", count);
}