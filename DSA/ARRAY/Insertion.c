

#include <stdio.h>

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int indinsertion(int a[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        return 0;
    }

    for (int i = size - 1; i >= index; i--)
    {
        a[i + 1] = a[i];
    }
    a[index] = element;
    return 1;
}

int main()
{
    int a[100] = {7, 8, 12, 27, 88};
    int size = 5, index = 3;
    int element = 45;
    display(a, size);
    indinsertion(a, size, element, 100, index);
    size += 1;
    display(a, size);
    return 0;
}
