#include <stdio.h>

int main()
{
    int a[100], item, n;
    printf("Enter size of array\n");
    scanf("%d", &n);

    printf("Enter array elements one bye one\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter item you want  to store ar end of the ARRAY\n");
    scanf("%d", &item);
    n = n + 1;
    a[n - 1] = item;
    printf("New array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}