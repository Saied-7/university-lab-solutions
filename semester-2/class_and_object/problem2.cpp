#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int roll;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll: " << roll << endl;
    }
};
int main()
{
    Student s1;

    s1.name = "Rahim";
    s1.age = 20;
    s1.roll = 101;

    s1.display();

    return 0;
}