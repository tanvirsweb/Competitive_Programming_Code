// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin >> c;

    if (c >= 'a' && c <= 'z')
    {
        // if c is lowercase print uppercase
        cout << (char)(c + 'A' - 'a') << "\n";
    }
    else if (c >= 'A' && c <= 'Z')
    {
        // if c is uppercase print lowercase
        cout << (char)(c + 'a' - 'A') << "\n";
    }

    return 0;
}