#include <iostream>
using namespace std;
int main()
{
    int arr[4][2] = {{76, 81}, {13, 76}, {63, 43}, {88, 90}};
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 1; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }
}