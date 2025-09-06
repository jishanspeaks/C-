#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 3, 2, 1};
    int n = sizeof(a) / 4;
    int isPalindrome = 1;
    for (int i = 1; i < n / 2; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}
