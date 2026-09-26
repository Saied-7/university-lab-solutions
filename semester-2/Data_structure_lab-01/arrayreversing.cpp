#include <iostream>
using namespace std;

int main() {
    int a[5]={10,20,30,40,50}, temp;

    for(int i=0;i<5/2;i++) {
        temp=a[i];
        a[i]=a[4-i];
        a[4-i]=temp;
    }

    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";

    return 0;
}