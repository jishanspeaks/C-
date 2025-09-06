#include <iostream>
using namespace std;
int main()
{
    int n; // for number
    int r; // for remainder
    cout << "Enter number: ";
    cin >> n;
    int c=n;
    int rev = 0; // reverse store karane ke liye
    while (n > 0)
    {
        r = n % 10;
        rev =  r+rev*10;
        n = n / 10;
        
    }
    cout << "Reverse of number is " << rev << endl;
    cout << "Reverse of number is " << c+rev << endl;
}