#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if (x < 0)
    {
        cout << "The absolute value of the given number is " << -x << endl;
    }
    else
        cout << "The absolute value of the given number is " << x << endl;
}
