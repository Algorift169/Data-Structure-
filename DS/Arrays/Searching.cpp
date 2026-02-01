#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (auto i = 0; i < n; i++) cin >> arr[i];

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int index = -1;
    for (auto i = 0; i < n; i++)
        if (arr[i] == key) { index = i; break; }

    if (index != -1) cout << "Found at index " << index << "\n";
    else cout << "Not found\n";
}
