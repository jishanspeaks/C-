#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / 4;
    int i = 0;
    int j = n - 1;
    // reverse karne ka code
    while (i < j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    cout << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cout << a[i] << " ";
    }
}
