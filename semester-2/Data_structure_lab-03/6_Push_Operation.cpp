// Push Operation
#include<bits/stdc++.h>
using namespace std;
int main(){
    int s[5],top=-1,x=10;
    if(top==4) cout<<"Stack Overflow";
    else{
        s[++top]=x;
        cout<<"Pushed: "<<s[top];
    }
}