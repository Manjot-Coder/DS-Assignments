#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>&a){
    int n=a.size();
    for(int i=0;i<n-1;i++){
        int m=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[m]) m=j;
        }
        swap(a[i],a[m]);
    }
}
int main(){
    vector<int>a={5,3,1,4,2};
    selectionSort(a);
    for(int x:a) cout<<x<<" ";
}
