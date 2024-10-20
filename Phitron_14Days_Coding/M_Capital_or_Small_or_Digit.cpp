// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;
    if (c >= 'A' && c <= 'Z')
    {
        cout << "ALPHA\nIS CAPITAL\n";
    }
    else if (c >= 'a' && c <= 'z')
    {
        cout << "ALPHA\nIS SMALL\n";
    }
    else if (c >= '0' && c <= '9')
    {
        cout << "IS DIGIT\n";
    }
    return 0;
}