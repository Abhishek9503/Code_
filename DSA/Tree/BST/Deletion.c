#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

struct node *createnode(int data)
{
    struct node *n;                                 // Creating a node pointer
    n = (struct node *)malloc(sizeof(struct node)); // Allocating memeory in heap
    n->data = data;                                 // Setting the data
    n->left = NULL;                                 // Setting  left  children to NULL
    n->right = NULL;                                // Setting  right children to NULL
    return n;                                       // Finally returning the created node
};

struct node *inorderpredecessor(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}

struct node *deletenode(struct node *root, int value)
{
    struct node *iprev;
    if (root == NULL)
    {
        return NULL;
    }
    if (root->left == NULL && root->right == NULL)
    {
        free(root);
        return NULL;
    }

    if (value < root->data)
    {
        root->left = deletenode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deletenode(root->right, value);
    }
    else
    {
        iprev = inorderpredecessor(root);
        root->data = iprev->data;
        root->left = deletenode(root->left, iprev->data);
    }
    return root;
}

int main()
{

    // Constructing the root node using function(Recommended)

    struct node *p = createnode(5);
    struct node *p1 = createnode(3);
    struct node *p2 = createnode(6);
    struct node *p3 = createnode(1);
    struct node *p4 = createnode(4);

    /*
               5
              / \
             3   6
            / \
           1  4
    */
    // linking the root node with the other two node
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    // printf("\n");
    //  printf("%d", isbst(p));

    // insert(p, 2);
    inorder(p);
    deletenode(p, 3);
    // printf("%d", p->left->left->right->data);
    printf("\n");
    inorder(p);

    return 0;
}
