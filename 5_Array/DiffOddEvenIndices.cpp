#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int SumEven = 0;
    int SumOdd = 0;
    for (int i = 0; i <= 4; i++)
    {
        if (i % 2 == 0)
            SumEven = SumEven + arr[i];
        else
            SumOdd = SumOdd + arr[i];
    }
    cout << "Difference between even and odd indices is ";
    cout << SumEven - SumOdd;
    cout << endl;
}