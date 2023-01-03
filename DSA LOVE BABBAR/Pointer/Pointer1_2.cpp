#include <iostream>
using namespace std;

int main()
{

    /*
        // Pointer to int is creadted and pointing to some garabage adfdress
        int *p;
        cout << *p << endl;
        */

    int i = 5;
    int *q = &i;
    cout << q << endl;
    cout << *q << endl;

    int *p = 0;
    p = &i;
    cout << p << endl;
    cout << *p << endl;

    cout << endl;

    int num = 5;
    int a = num;
    cout << "A before-> " << num << endl;
    a++;
    cout << "A after-> " << num << endl;

    cout << endl;

    int *p1 = &num;
    cout << "Before " << num << endl;
    (*p1)++;
    cout << "after " << num << endl;

    cout << "Important COnecpt" << endl;

    int x = 3;
    int *t = &x;
    cout << "Before ++  ->" << *t << endl;
    *t = *t + 1;

    cout << "After ++  ->" << *t << endl;

    cout << endl;
    cout << endl;

    cout << "Before ++ of t ->" << t << endl;
    t = t + 1;

    cout << "After ++ of t ->" << t << endl;

    return 0;
}