#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int key;
    struct Node *left, *right;
};
struct Node *newNodeCreate(int value)
{
    struct Node *temp = (struct Node *)malloc(
        sizeof(struct Node));
    temp->key = value;
    temp->left = temp->right = NULL;
    return temp;
}
struct Node *
searchNode(struct Node *root, int target)
{
    if (root == NULL || root->key == target)
    {
        return root;
    }
    if (root->key < target)
    {
        return searchNode(root->right, target);
    }
    return searchNode(root->left, target);
}
struct Node *
insertNode(struct Node *node, int value)
{
    if (node == NULL)
    {
        return newNodeCreate(value);
    }
    if (value < node->key)
    {
        node->left = insertNode(node->left, value);
    }
    else if (value > node->key)
    {
        node->right = insertNode(node->right, value);
    }
    return node;
}
void postOrder(struct Node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf(" %d ", root->key);
    }
}
void inOrder(struct Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d ", root->key);
        inOrder(root->right);
    }
}
void preOrder(struct Node *root)
{
    if (root != NULL)
    {
        printf(" %d ", root->key);
        preOrder(root->left);
        preOrder(root->right);
    }
}
struct Node *findMin(struct Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->left != NULL)
    {
        return findMin(root->left);
    }
    return root;
}
struct Node *delete(struct Node *root,
                    int x)
{
    if (root == NULL)
        return NULL;

    if (x > root->key)
    {
        root->right = delete (root->right, x);
    }
    else if (x < root->key)
    {
        root->left = delete (root->left, x);
    }
    else
    {
        if (root->left == NULL && root->right == NULL)
        {
            free(root);
            return NULL;
        }
        else if (root->left == NULL || root->right == NULL)
        {
            struct Node *temp;
            if (root->left == NULL)
            {
                temp = root->right;
            }
            else
            {
                temp = root->left;
            }
            free(root);
            return temp;
        }
        else
        {
            struct Node *temp = findMin(root->right);
            root->key = temp->key;
            root->right = delete (root->right, temp->key);
        }
    }
    return root;
}

int main()
{
    struct Node *root = NULL;
    root = insertNode(root, 90);
    insertNode(root, 20);
    insertNode(root, 81);
    insertNode(root, 62);
    insertNode(root, 73);
    insertNode(root, 3);
    insertNode(root, 5);
    insertNode(root, 8);
    insertNode(root, 9);
    insertNode(root, 12);
    insertNode(root, 100);
    insertNode(root, 11);
    if (searchNode(root, 60) != NULL)
    {
        printf("60 found");
    }
    else
    {
        printf("60 not found");
    }

    printf("\n");
    postOrder(root);
    printf("\n");
    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    struct Node *temp = delete (root, 70);
    printf("After Delete: \n");
    inOrder(root);
    return 0;
}