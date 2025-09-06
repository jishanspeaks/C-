#include <iostream>
using namespace std;
void change(int x[]) // array name change kar sakte hai
{
    x[0] = 9; // changing array element
}
int main()
{
    int arr[3] = {1, 2, 3};
    for (int i = 0; i <= 2; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    change(arr); // pass by refrence
    for (int i = 0; i <= 2; i++)
    {
        cout << arr[i] << " "; // after changing print array element
    };
}