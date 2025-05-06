#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

int main() {
  
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    head->next = a;
    a->next=b;
    b->next=c;

    auto cur = head;
    
    
    while (cur)
    {
        cout<<cur->val<<" ";
        cur = cur->next;
    }
    cout<<endl;
    cur = head;
    while (cur)
    {
        cout<<cur->val<<" ";
        cur = cur->next;
    }
    cur = head;
    cout<<endl;
    while (cur)
    {
        cout<<cur->val<<" ";
        cur = cur->next;
    }
    


    return 0;
}
