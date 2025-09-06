#include <iostream>
using namespace std;
int main()
{
    int x = 56237;
    string s = to_string(x);    // convert from integer to string
    cout << s.length() << endl; // to count no of digit
    s += "Jishan";
    cout << s << endl;
}