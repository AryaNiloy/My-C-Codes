#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *left, *right, *parent;
} Node;

Node *create_node(int data)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->parent = NULL;
    return new_node;
}

void addleft(Node *parent, Node *child)
{
    parent->left = child;
    if (child != NULL)
    {
        child->parent = parent;
    }
}

void addright(Node *parent, Node *child)
{
    parent->right = child;
    if (child != NULL)
    {
        child->parent = parent;
    }
}

Node *bst_insert(Node *root, Node *node)
{
    Node *parent_node = NULL, *current_node = root;

    if (root == NULL)
    {
        return node;
    }

    while (current_node != NULL)
    {
        parent_node = current_node;
        if (node->data < current_node->data)
        {
            current_node = current_node->left;
        }
        else
        {
            current_node = current_node->right;
        }
    }

    if (node->data < parent_node->data)
    {
        addleft(parent_node, node);
    }
    else
    {
        addright(parent_node, node);
    }

    return root;
}

void preorder(Node *created_node)
{
    if (created_node != NULL)
    {
        printf("%d ", created_node->data);
        preorder(created_node->left);
        preorder(created_node->right);
    }
}

void inorder(Node *created_node)
{
    if (created_node != NULL)
    {
        inorder(created_node->left);
        printf("%d ", created_node->data);
        inorder(created_node->right);
    }
}

void postorder(Node *created_node)
{
    if (created_node != NULL)
    {
        postorder(created_node->left);
        postorder(created_node->right);
        printf("%d ", created_node->data);
    }
}

Node *bst_search(Node *root, int item)
{
    if (root == NULL || root->data == item)
    {
        return root;
    }

    if (item < root->data)
    {
        return bst_search(root->left, item);
    }

    return bst_search(root->right, item);
}

Node *bst_minimum(Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }

    return root;
}

Node *bst_transplant(Node *root, Node *current_node, Node *new_node)
{
    if (current_node == root)
    {
        root = new_node;
    }
    else if (current_node == current_node->parent->left)
    {
        addleft(current_node->parent, new_node);
    }
    else
    {
        addright(current_node->parent, new_node);
    }

    return root;
}

Node *bst_delete(Node *root, Node *node)
{
    if (node->left == NULL)
    {
        root = bst_transplant(root, node, node->right);
    }
    else if (node->right == NULL)
    {
        root = bst_transplant(root, node, node->left);
    }
    else
    {
        Node *successor = bst_minimum(node->right);

        if (successor->parent != node)
        {
            root = bst_transplant(root, successor, successor->right);
            addright(successor, node->right);
        }

        root = bst_transplant(root, node, successor);
        addleft(successor, node->left);
    }

    return root;
}

int main()
{
    Node *root = NULL;
    int arr[] = {10, 5, 15, 2, 7, 13, 17};
    for (int i = 0; i < 7; i++)
    {
        Node *new_node = create_node(arr[i]);
        root = bst_insert(root, new_node);
    }

    printf("Preorder: ");
    preorder(root);
    printf("\n");

    printf("Inorder: ");
    inorder(root);
    printf("\n");

    printf("Postorder: ");
    postorder(root);
    printf("\n");

    // Example of deletion (optional)
    // root = bst_delete(root, bst_search(root, 15));

    return 0;
}
