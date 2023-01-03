#include <stdio.h>

int main()
{
    int a[100], i, pos, size, item;
    printf("Enter array size\n");
    scanf("%d", &size);

    printf("Enter array elements size\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the position where  you want to store\n");
    scanf("%d", &pos);

    printf("Enter the item you want to store\n");
    scanf("%d", &item);

    for (int i = size; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = item;
    size++;

    printf("The new array elemenst are\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}