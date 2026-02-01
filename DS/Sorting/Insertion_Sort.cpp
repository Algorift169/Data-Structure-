#include <iostream>
using namespace std;

int main() {
    int n; 
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (auto i = 0; i < n; i++) cin >> arr[i];

    for (auto i = 1; i < n; i++) {
        int key = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    cout << "Sorted array (Insertion Sort): ";
    for (auto x : arr) cout << x << " ";
    cout << "\n";
}
