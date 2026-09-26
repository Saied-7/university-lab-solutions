#include <iostream>
using namespace std;

int main() {
    int a[5]={10,20,30,40,50}, n=5, pos=3;

    for(int i=pos-1;i<n-1;i++)
        a[i]=a[i+1];

    n--;

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}