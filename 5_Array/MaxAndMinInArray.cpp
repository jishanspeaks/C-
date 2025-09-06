#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / 4;
    int Max = INT_MIN;
    int Min = INT_MAX;
    for (int i = 0; i <= n - 1; i++)
    {
        // if(arr[i]>mx)  mx = arr[i];
        Max = max(Max, arr[i]);
        Min = min(Min, arr[i]);
    }
    cout << "Maximum element in the array is " << Max << endl;
    cout << "Maximum element in the array is " << Min << endl;
}