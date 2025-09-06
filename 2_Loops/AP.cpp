#include <iostream>
using namespace std;
int main()
{
    int n; // AP ki terms
    cout << "Enter terms: ";
    cin >> n;
    // 1 3 5 7 9 ...
    int a = 1;
    for (int i = 1; i <= n; i++)
    {

        cout << a << " ";
        a = a + 2;
    }
    cout << endl;
}