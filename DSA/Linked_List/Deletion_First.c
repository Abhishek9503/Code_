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

// Case:1 Deleting first element from the linked list

struct Node *deletefirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
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
    head = deletefirst(head);
    printf("After deleting the first node\n");
    linkedlisttraversal(head);

    return 0;
}
