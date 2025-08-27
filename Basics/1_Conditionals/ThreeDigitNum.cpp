#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 99 && num < 1000)
        cout << "Three digit number" << endl;
    else
        cout << "Not a three digit number" << endl;
}