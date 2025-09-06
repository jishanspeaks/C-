#include <iostream>
using namespace std;
int main()
{
    string s = "Jishan";
    cout << s << s.length() << endl;

    // s= s + " Ahmad";
    s = " Ahmad" + s;  // adding string

    cout << s << endl
         << s.length() << endl;
}