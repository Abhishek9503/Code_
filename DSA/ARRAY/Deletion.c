#include <stdio.h>

int inddeletion(int a, int size, int elements, int capacity, int index)
{
    for (int i = index; i < size; ++)
    {
        a[i] = a[i + 1];
    }
    a[index] = elements;
    return 1;
}

int main()
{

    int a[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45;
    index = 1;
    display(a, size);
    inddeletion(a, size, index);
    size -= 1;
    display(a, size);
    return 0;
}