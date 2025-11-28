#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={4,5,1,2,0,4};
    unordered_map<int,int> f;
    for(int x:a) f[x]++;
    for(int x:a){
        if(f[x]==1){
            cout<<x;
            break;
        }
    }
}
