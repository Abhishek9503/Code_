/*

#include <iostream>

using namespace std;

int main()
{
    int a[100][100], b[100][100], c[100][100], row1, col1, row2, col2;
    int i, j, k;

    cout << "Enter no. of rows" << endl;
    cin >> row1;

    cout << "Enter no. of column" << endl;
    cin >> col1;

    cout << "Enter value of matrices one by one" << endl;
    for (i = 1; i <= row1; i++)
    {
        for (j = 1; j <= col1; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << endl
         << "First matrices is";
    for (i = 1; i <= row1; i++)

    {
        cout << endl;
        for (j = 1; j <= col1; j++)
        {
            cout << a[i][j];
        }
    }

    // Second array

    cout << endl
         << "Enter no. of rows" << endl;
    cin >> row2;

    cout << "Enter no. of column" << endl;
    cin >> col2;

    cout << "Enter value of second array one by one" << endl;
    for (i = 1; i <= row2; i++)
    {
        for (j = 1; j <= col2; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << "Second array is";
    for (i = 1; i <= row2; i++)
    {
        cout << endl;
        for (j = 1; j <= col2; j++)
        {
            cout << b[i][j];
        }
    }
    cout << endl;

    if (col1 != row2)
    {
        cout << "Multiplication is Not possible";
    }

    else
    {
        for (i = 1; i <= row1; i++)
        {
            for (j = 1; j <= col2; j++)
            {
                c[i][j] = 0;
                for (k = 1; k <= row2; k++)
                {

                    c[i][j] += a[i][j] * b[i][j];
                }
            }
        }

        cout << "Resulatant array is";

        for (i = 1; i <= row1; i++)
        {
            cout << endl;
            for (j = 1; j <= col2; j++)
            {
                for (k = 1; k <= col2; k++)
                {

                    cout << c[i][j] << "  ";
                }
            }
        }
    }

    return 0;
}

*/

#include <stdio.h>
int main()

{
    int a1[2][2] = {{1, 2}, {3, 4}};
    int a2[2][2] = {{1, 2}, {3, 4}};
    int a3[2][2];
    int i, j, k, sum;

    printf("First array is given below\n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            printf("%d", a1[i][j]);
        }
        printf("\n");
    }

    printf("Second array is given below\n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            printf("%d", a2[i][j]);
        }
        printf("\n");
    }

    printf("Multiplication of array is given below\n");
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            sum = 0;
            for (k = 0; k <= 1; k++)
            {
                sum = sum + a1[i][j] * a2[i][j];
            }
            a3[i][j] = sum;

            printf("%d", a3[i][j]);
        }
        printf("\n");
    }
}
