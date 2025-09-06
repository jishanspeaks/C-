#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}   
int main()
{
    int x;
    cout << "Enter 1st value:";
    cin >> x;
    int y;
    cout << "Enter 1st value:";
    cin >> y;
    cout << "Before swapping the value of x = " << x << " and y = " << y <<endl;
    swap(x, y);
    cout << "After swapping the value of x = " << x << " and y = " << y << endl;
}