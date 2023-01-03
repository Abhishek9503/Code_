#include <iostream>
using namespace std;
class stack
#define size 5
{
    int a[size];
    int top;

public:
    stack()
    {
        top = -1;
    }
    void push();
    void pop();
    void display();
};

void stack::push()
{
    if (top == size - 1)
    {
        cout << "Stack is full";
        return;
    }
    else
    {
        top++;
        cout << "Enter data";
        cin >> a[top];
    }
}

void stack::pop()
{
    if (top == -1)
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << a[top] << " deleted " << endl;
        top--;
    }
}

void stack::display()
{
    int i = top;
    while (i >= 0)
    {
        cout << "The data is \n"
             << a[i] << endl;
        i--;
    }
}
int main()
{
    stack st;
    int ch;
    do
    {
        cout << "\n1.Push\n2.Pop\n3Display.\n4.Quit\n\nEnter chouce from 1 to 4.      ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            st.push();
            break;
        case 2:
            st.pop();
            break;
        case 3:
            st.display();
            break;
        default:
            cout << "Invalid";
        }
    } while (ch != 4);
}
