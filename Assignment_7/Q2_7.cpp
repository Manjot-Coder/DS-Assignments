#include <bits/stdc++.h>
using namespace std;

void improvedSelection(vector<int>&a){
    int l=0,r=a.size()-1;
    while(l<r){
        int mn=l,mx=l;
        for(int i=l;i<=r;i++){
            if(a[i]<a[mn]) mn=i;
            if(a[i]>a[mx]) mx=i;
        }
        swap(a[l],a[mn]);
        if(mx==l) mx=mn;
        swap(a[r],a[mx]);
        l++; r--;
    }
}

int main(){
    vector<int>a={5,3,1,4,2};
    improvedSelection(a);
    for(int x:a) cout<<x<<" ";
}
