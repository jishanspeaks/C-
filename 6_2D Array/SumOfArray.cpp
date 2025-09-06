#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int r, c;

    // Matrix ka size input
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    // First matrix input
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }

    // Second matrix input
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> b[i][j];
        }
    }

    // Addition
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Result print
    cout << "Sum of two matrices:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
