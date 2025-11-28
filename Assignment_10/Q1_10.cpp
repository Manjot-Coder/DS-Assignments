#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,2,3,1};
    unordered_set<int> s;
    bool ok=false;
    for(int x:nums){
        if(s.count(x)){ ok=true; break; }
        s.insert(x);
    }
    cout<<(ok?"true":"false");
}
