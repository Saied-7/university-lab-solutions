#include <iostream>
using namespace std;

int main() {
    int a[3]={1,2,3}, b[3]={4,5,6}, temp;

    for(int i=0;i<3;i++) {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }

    for(int i=0;i<3;i++) cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0;i<3;i++) cout<<b[i]<<" ";
    
    return 0;
}