#include <iostream>
#include <list>

using namespace std;
int main()
{

    list<int> l;
    list<int> n(5, 100);
    cout << "Printimg n\n";
    for (int i : n)
    {
        cout << i << " ";
        cout << endl;
    }

    l.push_back(1);
    l.push_front(2);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin()); // one one element will be delted

    cout << "After Erase" << endl;

    for (int i : l)
    {
        cout << i << endl;
    }

    int size = l.size();
    
            cout
        << "Size of list->" << size << endl;
}