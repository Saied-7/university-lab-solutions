#include <bits/stdc++.h>
using namespace std;

class Check
{
public:
    int number;

    void checkEvenOdd()
    {
        if(number % 2 == 0)
        {
            cout << "Even Number" << endl;
        }
        else
        {
            cout << "Odd Number" << endl;
        }
    }
};
int main()
{
    Check c1;

    c1.number = 7;

    c1.checkEvenOdd();

    return 0;
}