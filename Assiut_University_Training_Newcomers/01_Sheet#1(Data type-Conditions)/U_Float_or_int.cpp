// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double d;
    cin >> d;
    int n = (int)d;

    if (n == d)
    {
        cout << "int " << n << "\n";
    }
    else
    {
        cout << "float " << n << " " << d - n << "\n";
    }

    return 0;
}