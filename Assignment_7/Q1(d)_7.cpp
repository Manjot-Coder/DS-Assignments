#include <bits/stdc++.h>
using namespace std;

void mergeArr(vector<int>&a,int l,int m,int r){
    vector<int> t;
    int i=l,j=m+1;
    while(i<=m && j<=r){
        if(a[i]<=a[j]) t.push_back(a[i++]);
        else t.push_back(a[j++]);
    }
    while(i<=m) t.push_back(a[i++]);
    while(j<=r) t.push_back(a[j++]);
    for(int k=0;k<t.size();k++) a[l+k]=t[k];
}

void mergeSort(vector<int>&a,int l,int r){
    if(l>=r) return;
    int m=(l+r)/2;
    mergeSort(a,l,m);
    mergeSort(a,m+1,r);
    mergeArr(a,l,m,r);
}

int main(){
    vector<int>a={5,3,1,4,2};
    mergeSort(a,0,a.size()-1);
    for(int x:a) cout<<x<<" ";
}
