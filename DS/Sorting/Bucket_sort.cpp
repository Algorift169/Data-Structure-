#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<float> v(n);
    cout<<"Enter elements (0-1 floats): ";
    for(auto &x:v) cin>>x;

    int bucketCount=n;
    vector<vector<float>> buckets(bucketCount);
    for(auto x:v) buckets[int(x*bucketCount)].push_back(x);
    for(auto &b:buckets) sort(b.begin(),b.end());
    int idx=0;
    for(auto &b:buckets)
        for(auto x:b) v[idx++]=x;

    cout<<"Sorted array (Bucket Sort): ";
    for(auto x:v) cout<<x<<" ";
    cout<<"\n";
}
