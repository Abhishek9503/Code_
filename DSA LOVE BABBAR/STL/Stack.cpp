#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> s;

    s.push("Yadav");
    s.push("Abhishek");
    s.push("Indore");

    cout << "Top element->" << s.top() << endl;

    s.pop();
    cout << "After Pop\n";
    cout << "Top element is->" << s.top() << endl;

    int size = s.size();
    cout << "Size of stack is->" << size << endl;

    cout << "Empty or not->" << s.empty() << endl;

}