#include <iostream>
using namespace std;

int main() {
    int a[5]={10,20,30,40,50}, x, l=0, h=4;
    cin >> x;

    while(l<=h && x>=a[l] && x<=a[h]) {
        int p=l+(x-a[l])*(h-l)/(a[h]-a[l]);
        if(a[p]==x) 
            { cout<<"Found"; return 0; }
        if(a[p]<x) l=p+1; else h=p-1;
    }
    cout<<"Not Found";
}