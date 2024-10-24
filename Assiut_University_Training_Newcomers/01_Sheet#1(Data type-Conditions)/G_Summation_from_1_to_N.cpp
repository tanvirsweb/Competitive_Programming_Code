// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    // for (int i = 1; i <= n; i++) sum += i; // time limit exceed
    // cout << (int)(n * (n + 1) / 2) << "\n"; // value>int : wrong ans for wong typecasting
    // cout << (long long)(((n + 1) / (double)2.0) * n) << "\n"; wrong ans
    cout << n * (n + 1) / 2 << "\n";

    return 0;
}
