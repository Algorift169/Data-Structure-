#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void countingSortForRadix(vector<int> &v, int exp){
    int n=v.size();
    vector<int> output(n), count(10,0);
    for(auto x:v) count[(x/exp)%10]++;
    for(int i=1;i<10;i++) count[i]+=count[i-1];
    for(int i=n-1;i>=0;i--){
        output[count[(v[i]/exp)%10]-1]=v[i];
        count[(v[i]/exp)%10]--;
    }
    for(int i=0;i<n;i++) v[i]=output[i];
}

void radixSort(vector<int> &v){
    int maxVal=*max_element(v.begin(),v.end());
    for(int exp=1;maxVal/exp>0;exp*=10) countingSortForRadix(v,exp);
}

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter elements: ";
    for(auto &x:v) cin>>x;

    radixSort(v);

    cout<<"Sorted array (Radix Sort): ";
    for(auto x:v) cout<<x<<" ";
    cout<<"\n";
}
