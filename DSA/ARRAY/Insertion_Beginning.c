#include <stdio.h>
int main()
{
    int a[100], n, element, item;
    printf("Enter size of arrayn\n");
    scanf("%d", &n);

    printf("Enter array elements one bye one\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Insert element in array at beginnning\n");
    scanf("%d", &item);
    n++;
    for (int i = n; i > 1; i--)
    {
        a[i - 1] = a[i - 2];
    }

    a[0] = item;
    printf("Resultant array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}