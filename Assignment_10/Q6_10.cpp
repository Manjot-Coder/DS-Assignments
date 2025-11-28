#include <bits/stdc++.h>
using namespace std;

struct Node{
    int v;
    Node* l;
    Node* r;
    Node(int v):v(v),l(NULL),r(NULL){}
};

bool dfs(Node* r, unordered_set<int>& s){
    if(!r) return false;
    if(s.count(r->v)) return true;
    s.insert(r->v);
    return dfs(r->l,s) || dfs(r->r,s);
}

int main(){
    Node* a=new Node(5);
    a->l=new Node(3);
    a->r=new Node(7);
    a->l->l=new Node(3);
    unordered_set<int> s;
    cout<<(dfs(a,s)?"Duplicates Found":"No Duplicates");
}
