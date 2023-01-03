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

int isbst(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isbst(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isbst(root->right);
    }
    else
    {
        return 1;
    }
}

void insert(struct node *root, int key)
{
    struct node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (key == root->data)
        {
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }

    struct node *new = createnode(key);
    if (key < prev->data)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }
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

    insert(p, 2);
    printf("%d", p->left->left->right->data);
    return 0;
}