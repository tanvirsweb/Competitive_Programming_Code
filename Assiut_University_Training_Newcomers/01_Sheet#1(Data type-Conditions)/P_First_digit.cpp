// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s[0] - '0'; // convert 1st char of string to digit
    if (n % 2 == 0)
    {
        cout << "EVEN\n";
    }
    else
    {
        cout << "ODD\n";
    }

    return 0;
}