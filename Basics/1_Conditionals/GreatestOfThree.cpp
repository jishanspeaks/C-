#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter 1st number: ";
    cin >> a;
    int b;
    cout << "Enter 2nd number: ";
    cin >> b;
    int c;
    cout << "Enter 3rd number: ";
    cin >> c;
    if (a > b && a > c)
    {
        cout << a << " is greater" << endl;
    }
    else if (b > c)
    {
        cout << b << " is greater" << endl;
    }
    else
    {
        cout << c << " is greater" << endl;
    }
}