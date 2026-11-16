#include <bits/stdc++.h>
using namespace std;

class Calculator
{
public:
    int num1, num2;

    void add()
    {
        cout << "Result: " << num1 + num2 << endl;
    }
};
int main()
{
    Calculator c1;

    c1.num1 = 10;
    c1.num2 = 20;

    c1.add();

    return 0;
}