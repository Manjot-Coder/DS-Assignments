#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={0,-1,2,-3,1};
    int target=-2;
    unordered_set<int>s;
    bool ok=false;
    for(int x:a){
        if(s.count(target-x)){ ok=true; break; }
        s.insert(x);
    }
    cout<<(ok?"true":"false");
}
