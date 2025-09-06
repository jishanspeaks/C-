#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int x;
    cout << "Enter x: ";
    cin >> x;
    int count = 0;
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] > x)
            count++;
    }
    cout << "Total number greater than " << x <<" is ";
    cout << count;
    cout << endl;
}