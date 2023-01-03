#include <stdio.h>
int main()
{
    int a[100], n, i, max;
    printf("enter size of array");
    scanf("%d", &n);

    printf("Enter array elements one by one");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max) // (a[i] < max) for minimum
        {
            max = a[i];
        }
    }
    printf("Maximumn is %d ", max);
    return 0;
}