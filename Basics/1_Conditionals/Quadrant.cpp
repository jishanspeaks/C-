#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter x quadrant: ";
    cin >> x;
    int y;
    cout << "Enter y quadrant: ";
    cin >> y;

    if (x > 0 && y > 0)
    {
        cout << "At 1st Quadrant" << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "At 2nd Quadrant " << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "At 3rd Quadrant" << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << "At 4th Quadrant" << endl;
    }
    else if (x == 0 && (y > 0 || y < 0))
    {
        cout << "At y Axis" << endl;
    }
    else if (y == 0 && (x > 0 || x < 0))
    {
        cout << "At x Axis" << endl;
    }
    else if (x == 0 && y == 0)
    {
        cout << "At Origin" << endl;
    }
}