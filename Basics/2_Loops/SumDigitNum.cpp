#include <iostream>
using namespace std;
int main()
{
    int n; // for number
    int r; // for remainder
    cout << "Enter number: ";
    cin >> n;
    int sum = 0; // sum store karane ke liye
    while (n > 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    cout << "sum of digit is " << sum << endl;
}