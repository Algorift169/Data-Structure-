#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter elements (non-negative integers): ";
    for (auto &x : v) cin >> x;

    int maxVal = *max_element(v.begin(), v.end());  // correct usage now
    vector<int> count(maxVal+1, 0);
    for (auto x : v) count[x]++;
    int idx = 0;
    for (int i = 0; i <= maxVal; i++)
        while (count[i]-- > 0) v[idx++] = i;

    cout << "Sorted array (Counting Sort): ";
    for (auto x : v) cout << x << " ";
    cout << "\n";
}
