/*
Pointer and function
*/

#include <iostream>
using namespace std;

void print(int *p)
{
    cout << p << endl;
}

void update(int *p)
{
    // p-p+1; // Not valye will change by doing this shit
    *p = *p + 1;
}
int getsum(int *arr, int n)
{

    cout << "size fo arr->" << sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i[arr];
    }
    return sum;
}

int main()
{
    int value = 5;
    int *p = &value;

    //   print(p);

    cout << "Before Update->" << *p << endl;
    update(p);
    cout << "Before Update->" << *p << endl;

    int arr[6] = {1, 2, 3, 4, 5, 8};
    cout << "The sum is " << getsum(arr + 3, 3) << endl;

    return 0;

    /// use of pointer to function
}
