#include <iostream>
using namespace std;
int main()
{
    int arr[5][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int sum = 0;
    int l1, r1, l2, r2;
    cout << "Enter  starting coordinates (l1,r1): ";
    cin >> l1 >> r1;
    cout << "Enter  ending coordinates (l2,r2): ";
    cin >> l2 >> r2;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << sum << endl;
}