#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={1,2,5,4,0,2,1};
    vector<int>b={2,4,5,0,1,1,2};
    unordered_map<int,int> f;
    for(int x:a) f[x]++;
    bool ok=true;
    for(int x:b){
        if(!f[x]){ ok=false; break; }
        f[x]--;
    }
    cout<<(ok?"true":"false");
}
