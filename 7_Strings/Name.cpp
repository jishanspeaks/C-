#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter a string: ";
    // cin>>s;   // Puri line considered nahi ki jayegi
    getline(cin, s);
    cout << s;
}