#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];  // Static array

    cout << "Enter " << n << " elements: ";
    for (auto i = 0; i < n; i++) cin >> arr[i];

    cout << "Array: ";
    for (auto i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";

    // Dynamic array example
    vector<int> v(n);
    cout << "Enter " << n << " elements for vector: ";
    for (auto &x : v) cin >> x;

    cout << "Vector: ";
    for (auto x : v) cout << x << " ";
    cout << "\n";
}
