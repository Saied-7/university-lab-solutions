#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
    string brand;
    string color;

    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Color: " << color << endl;
    }
};
int main()
{
    Car c1;

    c1.brand = "Toyota";
    c1.color = "Black";

    c1.display();

    return 0;
}