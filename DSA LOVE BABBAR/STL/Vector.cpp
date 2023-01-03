#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> v;

    // or

    vector<int> a(5, 1);
    for (int i : a)
    {
        cout << i << endl;
    }

    // output 1 1 1 1 1

    cout << "Capacity->" << v.capacity() << endl;
    cout << "Size->" << v.size() << endl;

    v.push_back(1);
    cout << "Capacity->" << v.capacity() << endl;
    cout << "Size->" << v.size() << endl;

    v.push_back(2);
    cout << "Capacity->" << v.capacity() << endl;
    cout << "Size->" << v.size() << endl;

    v.push_back(3);
    cout << "Capacity->" << v.capacity() << endl;
    cout << "Size->" << v.size() << endl;

    v.push_back(4);
    cout << "Capacity->" << v.capacity() << endl;
    cout << "Size->" << v.size() << endl;

    v.push_back(6);
    cout << "Capacity->" << v.capacity() << endl;
    cout << "Size->" << v.size() << endl;

    cout << "Element at second index " << v.at(2) << endl;

    cout << "Front " << v.front() << endl;
    cout << "BAck " << v.back() << endl;

    cout << "Before pop " << endl;
    for (int i : v)
    {
        cout << i << "";
    }
    cout << endl;

    v.pop_back();

    cout << "After pop " << endl;
    for (int i : v)
    {
        cout << i << "";
    }
    cout << endl;

    cout << " Before Clear " << v.size();
    v.clear();
    cout << " After Clear" << v.size();
}
