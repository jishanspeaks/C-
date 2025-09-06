#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
for (int i = 1; i <= n; i++)
    {
       
        arr[i - 1] = i * i; // storing square
    }
    cout << "Square from 1 to " << n << " are ";
    for (int i = 0; i <= n - 1; i++) // loop for printing aquare
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}