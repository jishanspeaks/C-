#include <iostream>
using namespace std;
int main()
{
    int f;
    cout << "Enter no of flowers: ";
    cin >> f;
    int coin = (f / 3) * 5;
    int r = f % 3;
    if (r == 1)
    {
        coin = ((f - 4) / 3) * 5 + 8;
    }
    else if (r == 2)
    {
        coin += 4;
    }
    cout << "Minimum coins: " << coin << endl;
    return 0;
}
