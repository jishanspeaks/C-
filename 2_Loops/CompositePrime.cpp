#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    bool flag = true; // true means prime
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false; // false means composite
            break;        // to get out of the loop
            //continue;   // particular statement ko break karne ke liye
        }
    }
    if (n == 1)
        cout << "Neither Prime Nor Composite" << endl;
    else if (flag == true)
        cout << "Prime" << endl;
    else
        cout << "composite" << endl;
}