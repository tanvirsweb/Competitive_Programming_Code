// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cnt;
    cin >> cnt;

    long long fact, n;
    while (cnt--)
    {
        cin >> n;
        fact = 1;
        for (int i = 1; i <= n; i++)
        {
            fact *= i;
        }
        cout << fact << "\n";
    }
    return 0;
}