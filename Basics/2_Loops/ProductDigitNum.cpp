#include <iostream>
using namespace std;
int main()
{
    int n; // for number
    int r; // for remainder
    cout << "Enter number: ";
    cin >> n;
    int p = 1; // product store karane ke liye
    while (n > 0)
    {
        r = n % 10;
        p = p * r;
        n = n / 10;
    }
    cout << "product2 of digit is " << p << endl;
}