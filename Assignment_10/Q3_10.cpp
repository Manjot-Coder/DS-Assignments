#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={2,3,2,4,3,2};
    unordered_map<int,int> f;
    for(int x:nums) f[x]++;
    for(auto &p:f) cout<<p.first<<" -> "<<p.second<<" times\n";
}
