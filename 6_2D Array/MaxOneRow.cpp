#include <iostream>
using namespace std;
int main()
{
    int arr[3][4] = {1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 0, 1};

    int maxCount = 0, rowIndex = 0;
    for (int i = 0; i <= 2; i++)
    {
        int count = 0;
        for (int j = 0; j <= 3; j++)
        {
            if (arr[i][j] == 1)

            {
                count++;
            }
            if (maxCount < count)
            {
                maxCount = count;
                rowIndex = i;
            }
        }
    }
    cout << "Maximum Row of one = " << maxCount << " and the row index = " << rowIndex << endl;
}