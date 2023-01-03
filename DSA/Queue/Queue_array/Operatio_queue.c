#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isempty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

int isfull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val)
{
    if (isfull(q))
    {
        printf("QueueOverflow");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
        printf("Enqueued element %d\n", val);
    }
}

int dequeue(struct queue *q)
{
    int a = -1;
    if (isempty(q))
    {
        printf("The queue is empty\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct queue q;
    q.size = 100;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    if (isempty(&q))
    {
        printf("Queue is empty\n");
    }

    // enqueue few elements
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 18);

    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));

    enqueue(&q, 3);
    enqueue(&q, 1);
    enqueue(&q, 1);
    printf("Dequeuing element %d\n", dequeue(&q));
    return 0;
}