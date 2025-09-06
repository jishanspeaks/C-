#include <iostream>
using namespace std;
int main()
{
    int cp;
    cout << "Enter cost price: ";
    cin >> cp;
    int sp;
    cout << "Enter selling price: ";
    cin >> sp;
    if (sp > cp)
        cout << "Profit is " << sp - cp << endl;
    else if (cp > sp)
        cout << "Loss is " << cp - sp << endl;
    else if (cp == sp)
        cout << "No Profit No Loss" << endl;
}
