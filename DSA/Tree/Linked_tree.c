#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int main()
{

    /*
        // constructing the root node
        struct node *p;
        p = (struct node *)malloc(sizeof(struct node));
        p->data=1;
        p->left = NULL;
        p->right = NULL;

        // constructing the second node
        struct node *p1;
        p1 = (struct node *)malloc(sizeof(struct node));
        p->data=2;
        p1->left = NULL;
        p1->right = NULL;

        // constructing the third node
        struct node *p2;
        p2 = (struct node *)malloc(sizeof(struct node));
         p->data=4;
        p2->left = NULL;
        p2->right = NULL;
    */
    // OR

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

    struct node *p = createnode(2);
    struct node *p1 = createnode(1);
    struct node *p2 = createnode(4);

    // linking the root node with the other two node
    p->left = p1;
    p->right = p2;

    return 0;
}