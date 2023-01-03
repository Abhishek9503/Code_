
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

int main()
{
    struct node *createnode(int data)
    {
        struct node *n;                                 // Creating a node pointer
        n = (struct node *)malloc(sizeof(struct node)); // Allocating memeory in heap
        n->data = data;                                 // Setting the data
        n->left = NULL;                                 // Setting  left  children to NULL
        n->right = NULL;                                // Setting  right children to NULL
        return n;                                       // Finally returning the created node
    };

    // Constructing the root node using function(Recommended)

    struct node *p = createnode(4);
    struct node *p1 = createnode(1);
    struct node *p2 = createnode(6);
    struct node *p3 = createnode(5);
    struct node *p4 = createnode(2);

    //       4
    //      / \
//         1  6
    //    / \ 
//       5   2

    // linking the root node with the other two node
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    inorder(p);
    return 0;
}