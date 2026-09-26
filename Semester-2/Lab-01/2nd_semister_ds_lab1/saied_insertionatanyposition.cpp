#include <iostream>
using namespace std;

int main() {
    int a[10]={10,20,30,40,50}, n=5, pos=3, x=25;

    for(int i=n; i>=pos; i--) { 
        a[i]=a[i-1];
    }
    a[pos-1]=x;
    n++;

    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}