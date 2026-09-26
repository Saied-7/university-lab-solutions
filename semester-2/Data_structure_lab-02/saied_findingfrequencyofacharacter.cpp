#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "banana";
    char x = 'a';
    int count = 0;

    for(int i=0; i<s.length(); i++)
        if(s[i] == x)
            count++;

    cout << "Frequency = " << count;
    return 0;
}