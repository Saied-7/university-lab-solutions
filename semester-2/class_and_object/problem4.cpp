#include <bits/stdc++.h>
using namespace std;

class Number
{
public:
    int number;

    void findSquare()
    {
        cout << "Square: " << number * number << endl;
    }
};

int main()
{
    Number n1;

    n1.number = 5;

    n1.findSquare();

    return 0;
}