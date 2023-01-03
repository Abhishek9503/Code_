
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
        printf("Elements:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *deleteend(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;

    free(q);
    return (head);
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
    head = deleteend(head);
    printf("After deleting the between node node\n");
    linkedlisttraversal(head);

    return 0;
}
