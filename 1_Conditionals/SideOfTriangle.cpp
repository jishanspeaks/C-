#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter 1st side of triangle: ";
    cin >> a;
    int b;
    cout << "Enter 2nd side of triangle: ";
    cin >> b;
    int c;
    cout << "Enter 3rd side of triangle: ";
    cin >> c;
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        cout << "Valid triangle" << endl;
    }
    else
    {
        cout << "Invalid triangle" << endl;
    }
}