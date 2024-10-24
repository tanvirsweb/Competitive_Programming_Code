// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    if (s == '+' && a + b == c)
    {
        cout << "Yes\n";
    }
    else if (s == '+' && a + b != c)
    {
        cout << a + b << "\n";
    }

    if (s == '-' && a - b == c)
    {
        cout << "Yes\n";
    }
    else if (s == '-' && a - b != c)
    {
        cout << a - b << "\n";
    }

    if (s == '*' && a * b == c)
    {
        cout << "Yes\n";
    }
    else if (s == '*' && a * b != c)
    {
        cout << a * b << "\n";
    }

    return 0;
}