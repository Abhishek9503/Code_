#include <iostream>
#include <set>

using namespace std;

int main()
{

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(7);
    s.insert(7);
    s.insert(3);
    s.insert(3);

    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    set<int>::iterator it = s.begin();

    s.erase(it);

    for (auto i : s)
    {
        cout << i << endl;
    }

    cout << "5 is present or not->" << s.count(5) << endl;

    set<int>::iterator itr = s.find(5);

    for (auto it   = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}