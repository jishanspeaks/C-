#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / 4;
    int b[n];
    for (int i = 0; i <= n - 1; i++)
    {
        b[i] = a[n - 1 - i];
        cout << b[i] << " ";
    }
}