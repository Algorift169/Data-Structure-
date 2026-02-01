#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    int mat[r][c];
    cout << "Enter elements: ";
    for (auto i = 0; i < r; i++)
        for (auto j = 0; j < c; j++)
            cin >> mat[i][j];

    cout << "Matrix:\n";
    for (auto i = 0; i < r; i++) {
        for (auto j = 0; j < c; j++) cout << mat[i][j] << " ";
        cout << "\n";
    }

    // Sum of each row
    for (auto i = 0; i < r; i++) {
        int sum = 0;
        for (auto j = 0; j < c; j++) sum += mat[i][j];
        cout << "Sum of row " << i << ": " << sum << "\n";
    }
}
