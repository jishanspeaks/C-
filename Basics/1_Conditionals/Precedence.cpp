#include <iostream>
using namespace std;
int main()
{
    int x = 3, y, z;
    y = x = 10; // right to left precedence.
    z = x < 10; // right to left precedence
    // the above equation is false
    cout << x << " " << y << " " << z <<endl;
}
