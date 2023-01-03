#include <iostream>
#include <vector>
using namespace std;

char tolowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int getlength(char name[])
{
    int count = 0;
    for (int i = 0; i < name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

bool checkpalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        if (a[s] != a[e])
        {
            return 0;
        }
        else
        {
            s++, e--;
        }
    }
    return 1;
}

int main()
{
    char name[20];

    cout << "Enter your name" << endl;
    cin >> name;
    int len = getlength(name);

    cout << "Length is->" << len << endl;
    //   reverse(name, len);
    cout << "Your name is" << endl;
    cout << name << endl;

    cout << "Palindrome or not->" << checkpalindrome(name, len) << endl;
    cout << "Charatcter is " << tolowercase('b') << endl;
    cout << "Charatcter is " << tolowercase('A');
}