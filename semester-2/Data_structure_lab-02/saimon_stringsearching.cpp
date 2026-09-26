#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Hello World";
    char x;
    cin >> x;

    for(int i=0; i<s.length(); i++)
        if(s[i] == x)
        {
            cout << "Found";
            return 0;
        }

    cout << "Not Found";
    return 0;
}