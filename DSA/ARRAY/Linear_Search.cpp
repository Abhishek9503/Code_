

#include <iostream>
using namespace std;

int linearSearch(int a[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {

        {
            if (a[i] == element)
                return i;
        }
    }
    return -1;
}

int main()
{
    int a[] = {1, 2, 3, 4, 65, 897, 215, 100};
    int size = sizeof(a) / sizeof(int);
    int element = 833;
    int searchIndex = linearSearch(a, size, element);
    cout << "The element " << element << " Was found at position " << searchIndex;

    return 0;
}