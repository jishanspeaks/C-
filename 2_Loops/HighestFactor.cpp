#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int factor = 1; // factor store karne ke liye
    for (int i = n / 2; i >= 1; i--)
    {
        if (n % i == 0)
            factor = i;
        cout << factor << endl;
        break;
    }
}