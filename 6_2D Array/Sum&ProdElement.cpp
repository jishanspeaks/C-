#include <iostream>
using namespace std;
int main()
{
    int arr[4][2] = {{76, 81}, {13, 76}, {63, 43}, {88, 90}};
    int sum = 0;
    long product = 1;
    for (int i = 0; i <= 3; i++) // row ka 4 index hai
    {
        for (int j = 0; j <= 1; j++) // cols ka 2 index hai
        {
            sum += arr[i][j];
            product *= arr[i][j];
        }
    }
    cout << sum << endl;
    cout << product << endl;
}