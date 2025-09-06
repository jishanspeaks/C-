#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 81 && marks <= 100)
    {
        cout << "Very Good" << endl;
    }
    else if (marks >= 61)
    {
        cout << " Good" << endl;
    }
    else if (marks >= 41)
    {
        cout << "Average " << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
}