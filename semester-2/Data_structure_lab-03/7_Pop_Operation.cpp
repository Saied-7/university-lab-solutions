// Pop Operation
#include<bits/stdc++.h>
using namespace std;
int main(){
    int s[5]={10,20,30},top=2;
    if(top==-1) cout<<"Stack Underflow";
    else{
        cout<<"Deleted: "<<s[top];
        top--;
    }
}