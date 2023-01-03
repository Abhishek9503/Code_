#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    cout << "Finding 6->" << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "LOweer bound->" << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "Upper  bound->" << upper_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    int a = 3;
    int b = 5;

    cout << "Min->" << min(3, 5) << endl;
    cout << "Max->" << max(3, 5) << endl;

    cout << "A->" << a << endl;
    cout << "B->" << b << endl;

    swap(a, b);

    cout << "After swap" << endl;
    cout << "A->" << a << endl;
    cout << "B->" << b << endl;

    string abcd = "abcd";
    cout << abcd << endl;
    reverse(abcd.begin(), abcd.end());
    cout << "String->" << abcd << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After rotate->" << endl;
    for (int i : v)
    {
        cout << i << " " << endl;
    }

    sort(v.begin(), v.end());
  
    for (int i : v)
    {
        cout << i << " ";
    }
}