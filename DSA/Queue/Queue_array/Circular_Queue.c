#include <stdio.h>
#include <stdlib.h>

struct circularqueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isempty(struct circularqueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
int isfull(struct circularqueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct circularqueue *q, int val)
{
    if (isfull(q))
    {
        printf("Queue overflow");
    }

    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
        printf("Enqued element %d\n", val);
    }
}

int dequeue(struct circularqueue *q)
{
    int a = -1;
    if (isempty(q))
    {
        printf("Empty queue\n");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct circularqueue q;
    q.size = 4;
    q.r = q.f = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    if (isempty(&q))
    {
        printf("Empty Queue");
    }

    enqueue(&q, 10);
    enqueue(&q, 11);
    enqueue(&q, 12);

    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));

    enqueue(&q, 3);
    enqueue(&q, 1);

    printf("Dequeuing element %d\n", dequeue(&q));

    return 0;
}