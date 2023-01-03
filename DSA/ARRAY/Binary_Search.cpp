#include <iostream>
using namespace std;

int binarySearch(int a[], int size, int element)
{
    int low, mid, high;

    low = 0;
    high = size - 1;

    while (low <= high) 
    {
        mid = (high + low) / 2;

        if (a[mid] == element)
        {
            return mid;
        }
        if (a[mid] < element)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int a[] = {1, 3, 5, 7, 9, 64, 87, 96, 101, 205};
    int size = sizeof(a) / sizeof(int);
    int element = 5;
    int searchIndex = binarySearch(a, size, element);
    cout << "The element " << element << " was found at index " << searchIndex;
    return 0;
}