// deleting the element with a given value form the limked list

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlisttraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
// deleting with a given value

struct Node *deletenode(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }

    // return (head);
}

int main()
{
    struct Node *head;
    struct Node *Second;
    struct Node *Third;
    struct Node *Fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    Second = (struct Node *)malloc(sizeof(struct Node));
    Third = (struct Node *)malloc(sizeof(struct Node));
    Fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = Second;

    Second->data = 8;
    Second->next = Third;

    Third->data = 9;
    Third->next = Fourth;

    Fourth->data = 10;
    Fourth->next = NULL;

    linkedlisttraversal(head);
    head = deletenode(head, 8);
    printf("After deleting the between node node\n");
    linkedlisttraversal(head);

    return 0;
}
