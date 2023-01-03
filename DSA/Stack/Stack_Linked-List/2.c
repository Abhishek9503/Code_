// isempty():

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;

void linkedlisttraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elements:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isempty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int x)
{
    if (isfull(top))
    {
        printf("Stack Overflow\n");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
    }
}

int pop(struct Node *tp)
{
    if (isempty(tp))
    {
        printf("Stack underflow");
    }
    else
    {
        struct Node *n = tp;
        tp = tp->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int main()
{

    top = push(top, 1);
    top = push(top, 2);
    top = push(top, 3);
    int element = pop(top);
    printf("Popped element is %d\n", element);
    linkedlisttraversal(top);
    return 0;
}
