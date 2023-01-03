
// Pointer with chararcter
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = {"abcde"};

    cout << arr << endl;
    // ATTENTION HERE
    cout << ch << endl;

    char *c = &ch[0];
    // PRINT ENTIRE STRING
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;

    cout << p << endl;

    return 0;
}