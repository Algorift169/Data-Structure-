#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &v, int low, int high){
    int pivot=v[high], i=low-1;
    for(int j=low;j<high;j++){
        if(v[j]<=pivot){
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[i+1],v[high]);
    return i+1;
}

void quickSort(vector<int> &v, int low, int high){
    if(low<high){
        int pi=partition(v,low,high);
        quickSort(v,low,pi-1);
        quickSort(v,pi+1,high);
    }
}

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter elements: ";
    for(auto &x:v) cin>>x;

    quickSort(v,0,n-1);

    cout<<"Sorted array (Quick Sort): ";
    for(auto x:v) cout<<x<<" ";
    cout<<"\n";
}
