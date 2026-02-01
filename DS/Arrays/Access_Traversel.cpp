#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (auto i = 0; i < n; i++) cin >> arr[i];

    cout << "Array traversal: ";
    for (auto i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";

    // 2D array
    int r, c;
    cout << "Enter rows and columns for 2D array: ";
    cin >> r >> c;
    int mat[r][c];
    cout << "Enter elements: ";
    for (auto i = 0; i < r; i++)
        for (auto j = 0; j < c; j++)
            cin >> mat[i][j];

    cout << "2D Array:\n";
    for (auto i = 0; i < r; i++) {
        for (auto j = 0; j < c; j++) cout << mat[i][j] << " ";
        cout << "\n";
    }
}
