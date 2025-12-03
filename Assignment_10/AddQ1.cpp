#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={1,2,2,4,1};
    unordered_map<int,int> f;
    for(int x:a) f[x]++;
    int ans=-1, mx=0;
    for(auto &p:f){
        if(p.second>mx || (p.second==mx && p.first>ans)){
            mx=p.second;
            ans=p.first;
        }
    }
    cout<<ans;
}
