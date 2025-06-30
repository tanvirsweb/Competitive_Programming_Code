// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 2)
    {
        cout << -1 << "\n";
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << "\n";
        }
    }

    return 0;
}