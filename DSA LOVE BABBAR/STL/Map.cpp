#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "Abhishek";
    m[13] = "Yadav";
    m[2] = "Indore";

    m.insert({5, "bheem"});

    cout << "Before erase\n";
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    cout << "Finding 4-> " << m.count(4) << endl;
    cout << "Finding-4-> " << m.count(-4) << endl;

    m.erase(4);
    cout << "After erase\n";
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    auto it = m.find(5);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
}