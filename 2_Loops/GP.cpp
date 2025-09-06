#include <iostream>
using namespace std;
int main()
{
    int n; // GP ki terms
    cout << "Enter terms: ";
    cin >> n;
    // 1 2 4 8 16 32 64 ...
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a = a * 2;
    }
    cout << endl;
}