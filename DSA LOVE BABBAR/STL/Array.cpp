#include <iostream>
#include <array>
using namespace std;

int main()
{

    array<int, 4> a = {1, 2, 3, 5};
    int size = a.size();
    cout << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Empty or not->" << a.empty() << endl;

    cout << "First element->" << a.front() << endl;
    cout << "Last element->" << a.back() << endl;
}

/*

4
1
2
3
5
Empty or not->0
Empty or not->1
Empty or not->5

*/