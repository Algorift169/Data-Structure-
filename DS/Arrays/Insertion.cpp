#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n+1]; // Extra space for insertion
    cout << "Enter " << n << " elements: ";
    for (auto i = 0; i < n; i++) cin >> arr[i];

    int pos, val;
    cout << "Enter position to insert (0-indexed) and value: ";
    cin >> pos >> val;

    for (auto i = n; i > pos; i--) arr[i] = arr[i-1];
    arr[pos] = val; n++;

    cout << "Array after insertion: ";
    for (auto i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";
}
