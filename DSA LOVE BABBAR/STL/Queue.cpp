#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> q;

    q.push("Yadav");
    q.push("Abhishek");
    q.push("Indore");

    cout << "SIze before pop->" << q.size() << endl;
    cout << "First lement is->" << q.front() << endl;
    q.pop();

    cout << "Size after pop is->" << q.size() << endl;

    cout << "First lement is->" << q.front() << endl;
}