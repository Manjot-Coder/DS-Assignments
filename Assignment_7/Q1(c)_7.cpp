#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>&a){
    int n=a.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]) swap(a[j],a[j+1]);
        }
    }
}
int main(){
    vector<int>a={5,3,1,4,2};
    bubbleSort(a);
    for(int x:a) cout<<x<<" ";
}
