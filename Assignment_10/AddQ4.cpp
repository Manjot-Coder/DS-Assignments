#include <bits/stdc++.h>
using namespace std;

struct Node{
    int v;
    Node* next;
    Node(int v):v(v),next(NULL){}
};

int main(){
    Node* a=new Node(10);
    a->next=new Node(15);
    a->next->next=new Node(4);
    a->next->next->next=new Node(20);

    Node* b=new Node(8);
    b->next=new Node(4);
    b->next->next=new Node(2);
    b->next->next->next=new Node(10);

    unordered_set<int>s1,s2;
    for(Node* t=a;t;t=t->next) s1.insert(t->v);
    for(Node* t=b;t;t=t->next) s2.insert(t->v);

    vector<int> inter, uni;
    for(int x:s1) if(s2.count(x)) inter.push_back(x);
    for(int x:s1) uni.push_back(x);
    for(int x:s2) uni.push_back(x);

    for(int x:inter) cout<<x<<" ";
    cout<<"\n";
    for(int x:uni) cout<<x<<" ";
}
