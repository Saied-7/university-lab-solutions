#include <iostream>
using namespace std;

int main() {
    int a[5] = {10,20,30,40,50}, x;
    int l=0, h=4;
    cin >> x;

    while(l<=h) {
        int m=(l+h)/2;
        if(a[m]==x) { cout<<"Found"; return 0; }
        if(a[m]<x) l=m+1; else h=m-1;
    }
    cout<<"Not Found";
}