#include <iostream>
using namespace std;
int main()
{
    int n; // for number
    cout << "Enter number: ";
    cin >> n;
    int count = 0;  // counting number ko store karne ke liye
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    cout << count << endl;
}