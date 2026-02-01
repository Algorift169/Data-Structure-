#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (auto i = 0; i < n; i++) cin >> arr[i];

    for (auto i = 0; i < n-1; i++) {
        int minIdx = i;
        for (auto j = i+1; j < n; j++)
            if (arr[j] < arr[minIdx]) minIdx = j;
        swap(arr[i], arr[minIdx]);
    }

    cout << "Sorted array (Selection Sort): ";
    for (auto x : arr) cout << x << " ";
    cout << "\n";
}
