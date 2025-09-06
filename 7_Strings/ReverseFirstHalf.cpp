#include <iostream>
using namespace std;
int main()
{
    string s = "Jishan";
    cout << s << endl;
    int n = s.length(); // n = 6
    reverse(s.begin(), s.begin() + n / 2);
    cout << s << endl;

    
    // 2nd method but long

    // int i = 0;
    // int j = n/2 - 1;
    // // reverse karne ka code
    // while (i < j)
    // {
    //     char temp = s[i];
    //     s[i] = s[j];
    //     s[j] = temp;
    //     i++;
    //     j--;
    // }
    // cout<<s<<endl;
}