#include <iostream>
using namespace std;
int main()
{
    string s = "Jishan";
    cout << s << endl;
    int n = s.length(); // n = 6
    reverse(s.begin()+1, s.begin() + 5);
    cout << s << endl;
}