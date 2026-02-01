#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (auto i = 0; i < n; i++) cin >> arr[i];

    int pos;
    cout << "Enter position to delete (0-indexed): ";
    cin >> pos;

    for (auto i = pos; i < n-1; i++) arr[i] = arr[i+1];
    n--;

    cout << "Array after deletion: ";
    for (auto i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";
}
