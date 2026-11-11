// Insertion in Linked List
#include<bits/stdc++.h>
using namespace std;
struct Node{int data; Node* next;};
int main(){
    Node* head=new Node{10,NULL};
    Node* n=new Node;
    n->data=20;
    n->next=head;
    head=n;
    cout<<head->data<<" "<<head->next->data;
}