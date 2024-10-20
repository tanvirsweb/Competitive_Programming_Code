// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C
#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    if (c >= 'a' && c < 'z')
    {
        cout << (char)(c + 1) << "\n";
    }
    else if (c == 'z')
    {
        cout << "a\n";
    }
    return 0;
}