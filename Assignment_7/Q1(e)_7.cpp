#include <bits/stdc++.h>
using namespace std;

int partn(vector<int>&a,int l,int r){
    int p=a[r],i=l-1;
    for(int j=l;j<r;j++){
        if(a[j]<p){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}

void quickSort(vector<int>&a,int l,int r){
    if(l<r){
        int p=partn(a,l,r);
        quickSort(a,l,p-1);
        quickSort(a,p+1,r);
    }
}

int main(){
    vector<int>a={5,3,1,4,2};
    quickSort(a,0,a.size()-1);
    for(int x:a) cout<<x<<" ";
}
