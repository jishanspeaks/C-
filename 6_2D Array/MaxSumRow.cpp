#include <iostream>
using namespace std;
int main()
{
    int arr[3][4] = {1, 2, 3, 1, 0, 5, 0, 2, 9, 0, 0, 3};

    int maxSum = 0, rowIndex = 0;
    for (int i = 0; i <= 2; i++) 
    {
        int sum = 0;
        for (int j = 0; j <= 3; j++) 
        {
            sum += arr[i][j];
            if (sum > maxSum)
            {
                maxSum = sum;
                rowIndex = i;
            }
        }
    }
    cout << "Maximum Row Sum = " << maxSum << " and the row index = " << rowIndex << endl;
}