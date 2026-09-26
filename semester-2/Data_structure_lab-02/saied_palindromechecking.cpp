#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "madam";
    string r = "";

    for(int i=s.length()-1; i>=0; i--)
        r += s[i];

    if(s == r)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}