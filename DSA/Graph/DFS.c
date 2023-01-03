#include <stdio.h>
#include <stdlib.h>
struct stack
{

    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int visited[7] = {0, 0, 0, 0, 0, 0, 0};
int a[7][7] = {
    {0, 1, 1, 1, 0, 0, 0},
    {1, 0, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0},
    {1, 0, 1, 0, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 1},
    {0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 1, 0, 0},

};

void dfs(int i)
{
    int j;
    printf("%d", i);
    visited[i] = 1;
    for (int j = 0; j < 7; j++)
    {
        if (a[i][j] == 1 && !visited[j])
        {
            dfs(j);
        }
    }
}

int main()
{
    dfs(4);

    /*
        // struct stack s;
        // s.size;
        // s.size = -1;
        // s.arr = (int *)malloc(s.size * sizeof(int));
        // return 0;

        //  Both are correct

        struct stack *s;
        s->size = 80;
        s->top = -1;
        s->arr = (int *)malloc(s->size * sizeof(int));

        if (isEmpty(s))
        {
            printf("Stack is empty");
        }
        else
        {
            printf("Stack is not empty");
        }

        */
    return 0;
}
