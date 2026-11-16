#include<bits/stdc++.h>
using namespace std;
class student
{
 public : 
 char name[100];
 int rool;
 double gpa;
};
int main()
{
    student a;
    a.rool = 10;
    a.gpa = 5.0;
    char temp[100]="saiyed";
    strcpy(a.name,temp);

    cout<<a.name<<"\n"<<a.rool<<"\n"<<a.gpa;
 return 0;
}
