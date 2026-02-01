#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (auto i = 0; i < n; i++) cin >> arr[i];

    // Bubble Sort
    for (auto i = 0; i < n-1; i++)
        for (auto j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);

    cout << "Sorted array: ";
    for (auto x : arr) cout << x << " ";
    cout << "\n";
}
