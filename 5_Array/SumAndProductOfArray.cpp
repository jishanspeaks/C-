#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int sum = 0;
    int product = 1;
    for (int i = 0; i <= 4; i++)
    {
        sum = sum + arr[i];
        product = product * arr[i];
    }
    cout << "Sum of all element in array is " << sum << endl;
    cout << "Product of all element in array is " << product << endl;
}