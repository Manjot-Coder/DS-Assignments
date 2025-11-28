#include <bits/stdc++.h>
using namespace std;

struct Node{
    int v;
    Node* next;
    Node(int v):v(v),next(NULL){}
};

bool hasLoop(Node* h){
    unordered_set<Node*> s;
    while(h){
        if(s.count(h)) return true;
        s.insert(h);
        h=h->next;
    }
    return false;
}

int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    a->next=b; b->next=c; c->next=d; d->next=b;
    cout<<(hasLoop(a)?"true":"false");
}
