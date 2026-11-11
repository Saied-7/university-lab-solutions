// Creation of Linked List
#include<bits/stdc++.h>
using namespace std;
struct Node{int data; Node* next;};
int main(){
    Node *head=NULL,*temp;
    for(int i=0;i<3;i++){
        Node* n=new Node;
        cin>>n->data; n->next=NULL;
        if(head==NULL) head=n;
        else temp->next=n;
        temp=n;
    }
    return 0;
}