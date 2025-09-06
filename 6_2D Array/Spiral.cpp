#include <iostream>
using namespace std;
int main()
{
    int m, n;

    // Input sizes of matrix
    cout << "Enter no of rows and columns of matrix: ";
    cin >> m >> n;

    int A[m][n];

    // Input first matrix
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    int minr = 0;     // minimum row
    int maxr = m - 1; // maximum row
    int minc = 0;     // minimum cols
    int maxc = n - 1; // maximum cols
    int tne = m * n;  // total no element in matrix
    int count = 0;    // counting element
    while (count < tne)
    {
        // print minimum row
        for (int j = minc; j <= maxc && count < tne; j++)
        {
            cout << A[minr][j] << " ";
            count++;
        }
        minr++;
        // print maximum cols
        for (int i = minr; i <= maxr && count < tne; i++)
        {
            cout << A[i][maxc] << " ";
            count++;
        }
        maxc--;
        // print maximum row
        for (int j = maxc; j >= minc && count < tne; j--)
        {
            cout << A[maxr][j] << " ";
            count++;
        }
        maxr--;
        // print minimum cols
        for (int i = maxr; i >= minr && count < tne; i--)
        {
            cout << A[i][minc] << " ";
            count++;
        }
        minc++;
    }
}