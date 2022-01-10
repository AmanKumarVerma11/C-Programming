// Binary Tree Traversal Algorithms using C(Inorder, Preorder, Postorder)


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node *left;
    struct node *right;
};

// In-order traversal algorithm
void inOrder(struct node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    printf(" %d ", root->item);
    inOrder(root->right);
}

// pre-order Traversal algorithm
void preOrder(struct node *root)
{
    if (root == NULL)
        return;
    printf(" %d ", root->item);
    preOrder(root->left);
    preOrder(root->right);
}

// post-order traversal algorithm
void postOrder(struct node *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    printf(" %d ", root->item);
}

// create a new Node
struct node *createNode(item)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->item = item;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// insert a node at the left
struct node *inserAtLeft(struct node *root, int item)
{
    root->left = createNode(item);
    return root->left;
}

// insert a node at the right
struct node *insertAtRight(struct node *root, int item)
{
    root->right = createNode(item);
    return root->right;
}

int main()
{
    struct node *root = createNode(3);
    inserAtLeft(root, 6);
    insertAtRight(root, 9);

    inserAtLeft(root->left, 4);
    insertAtRight(root->left, 8);

    printf("Inorder traversal : ");
    inOrder(root);

    printf("\nPreorder traversal : ");
    preOrder(root);

    printf("\nPostorder traversal : ");
    postOrder(root);
}