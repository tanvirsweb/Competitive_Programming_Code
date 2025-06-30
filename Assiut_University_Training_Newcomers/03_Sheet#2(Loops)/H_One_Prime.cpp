// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int isPrime = 1;
    cin >> n;

    if (n <= 1)
    {
        cout << "NO\n";
    }
    else if (n == 2)
    {
        cout << "YES\n";
    }
    else if (n % 2 == 0)
    {
        cout << "NO\n";
    }
    else
    {
        for (int i = 3; i * i <= n; i += 2)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                cout << "NO\n";
                return 0;
            }
        }
        if (isPrime == 1)
        {
            cout << "YES\n";
        }
    }

    return 0;
}