#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter elements: ";
    for (auto &x : v) cin >> x;

    // Insert element at position
    int pos, val;
    cout << "Enter position and value to insert: ";
    cin >> pos >> val;
    v.insert(v.begin()+pos, val);

    cout << "Array after insertion: ";
    for (auto x : v) cout << x << " ";
    cout << "\n";

    // Delete element at position
    cout << "Enter position to delete: ";
    cin >> pos;
    v.erase(v.begin()+pos);

    cout << "Array after deletion: ";
    for (auto x : v) cout << x << " ";
    cout << "\n";
}
