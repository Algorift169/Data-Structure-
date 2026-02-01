#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &v, int l, int m, int r) {
    int n1 = m-l+1, n2 = r-m;
    vector<int> L(n1), R(n2);
    for (auto i=0;i<n1;i++) L[i]=v[l+i];
    for (auto i=0;i<n2;i++) R[i]=v[m+1+i];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2) v[k++] = (L[i]<=R[j]? L[i++] : R[j++]);
    while(i<n1) v[k++] = L[i++];
    while(j<n2) v[k++] = R[j++];
}

void mergeSort(vector<int> &v, int l, int r) {
    if(l<r){
        int m = l+(r-l)/2;
        mergeSort(v,l,m);
        mergeSort(v,m+1,r);
        merge(v,l,m,r);
    }
}

int main(){
    int n;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter elements: ";
    for(auto &x:v) cin >> x;

    mergeSort(v,0,n-1);

    cout << "Sorted array (Merge Sort): ";
    for(auto x:v) cout << x << " ";
    cout << "\n";
}
