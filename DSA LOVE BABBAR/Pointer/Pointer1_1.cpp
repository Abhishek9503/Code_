#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    cout << num << endl;

    cout << "Address of num is" << &num << endl;

    int *ptr = &num;

    cout << "Address of ptr " << ptr << endl;
    cout << "Value at ptr " << *ptr << endl;
    cout << "Value at num " << num << endl;
    cout << "Address is " << &num << endl;
    cout << "\n";
    double d = 4.3;
    double *p = &d;

    cout << "Value is: " << d << endl;
    cout << "Value is: " << *p << endl;
    cout << "Value is: " << &d << endl;
    cout << "Value is: " << p << endl;

    cout << endl;

    cout << "Size of int " << sizeof(num) << endl;
    cout << "Size of pointer " << sizeof(*p) << endl;
}