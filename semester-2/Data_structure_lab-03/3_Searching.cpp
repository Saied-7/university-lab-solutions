// Searching in Linked List
#include<bits/stdc++.h>
using namespace std;
struct Node{int data; Node* next;};
int main(){
    Node *a=new Node{10,NULL},*b=new Node{20,NULL};
    a->next=b;
    int key=20, found=0;
    Node* temp=a;
    while(temp!=NULL){
        if(temp->data==key) found=1;
        temp=temp->next;
    }
    if(found) cout<<"Found";
    else cout<<"Not Found";
}