#include <iostream>
using namespace std;
int main()
{
    int n;

    // Input sizes of matrix
    cout << "Enter no of line of matrix: ";
    cin >> n;

    int A[100][100];

    int minr = 0;     // minimum row
    int maxr = n - 1; // maximum row
    int minc = 0;     // minimum cols
    int maxc = n - 1; // maximum cols
    int tne = n * n;  // total no element in matrix
    int count = 1;    // counting element
    while (count <= tne)
    {
        // print minimum row
        for (int j = minc; j <= maxc && count <= tne; j++)
        {
            A[minr][j] = count++;
        }
        minr++;
        // print maximum cols
        for (int i = minr; i <= maxr && count <= tne; i++)
        {
            A[i][maxc] = count++;
        }
        maxc--;
        // print maximum row
        for (int j = maxc; j >= minc && count <= tne; j--)
        {
            A[maxr][j] = count++;
        }
        maxr--;
        // print minimum cols
        for (int i = maxr; i >= minr && count <= tne; i--)
        {
            A[i][minc] = count++;
        }
        minc++;
    }

    cout << "Spiral Matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}