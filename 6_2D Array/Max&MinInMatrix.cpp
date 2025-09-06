#include <iostream>
using namespace std;
int main()
{
    int arr[4][2] = {{76, 81}, {13, 76}, {63, 43}, {88, 90}};
    int mx = INT_MIN;
    int mn = INT_MAX;
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            mx = max(mx, arr[i][j]);
            mn = min(mn, arr[i][j]);
        }
    }
    cout << mx << endl;
    cout << mn << endl;
}
