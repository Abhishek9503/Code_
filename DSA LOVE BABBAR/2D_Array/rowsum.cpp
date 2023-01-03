#include <iostream>
using namespace std;

int largestrowsum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int rowindex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowindex = row;
        }
    }
    cout << "The maximum SUM is" << maxi << endl;
    return rowindex;
}
void printsum(int arr[][3], int row, int col)
{

    cout << "Printing the sum  " << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}
int main()
{

    int arr[3][3];

    // or ->  int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12}
    // int arr[3][4]={{1,11,111,111},{2,22,222,2222},{3,33,333,3333}};

    cout << "Entyer the elements" << endl;
    // Taking Input row wise
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing
    cout << "Printing the array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    printsum(arr, 3, 3);

    int ansindex = largestrowsum(arr, 3, 3);
    cout << "The maximum row is at index  " << ansindex << endl;
    return 0;
}