#include <iostream>
using namespace std;

int main()
{
    int a[100][100], row, col, b[100][100], c[100][100];
    int i, j;

    cout << "Enter no. of rowns" << endl;
    cin >> row;

    cout << "Enter no. of rowns" << endl;
    cin >> col;

    cout << "Enter value of array one by one" << endl;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << endl
         << "First matrices is";
    for (i = 1; i <= row; i++)

    {
        cout << endl;
        for (j = 1; j <= col; j++)
        {
            cout << a[i][j];
        }
    }

    cout << endl
         << "Enter value of second array one by one" << endl;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << "Second array is";
    for (i = 1; i <= row; i++)

    {
        cout << endl;
        for (j = 1; j <= col; j++)
        {
            cout << b[i][j];
        }
    }
    cout << endl;

    cout << "Sum of array is";

    for (i = 1; i <= row; i++)

    {
        cout << endl;
        for (j = 1; j <= col; j++)
        {
            cout << a[i][j] + b[i][j] << "  ";
        }
    }

    return 0;
}
