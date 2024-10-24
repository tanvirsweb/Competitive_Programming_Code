// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long result, a, b, c, d;
    cin >> a >> b >> c >> d;

    result = (a % 100) * (b % 100) % 100;
    result = result * (c % 100) % 100;
    result = result * (d % 100) % 100;

    // print last 2 digit
    if (result < 10)
    {
        cout << "0" << result << "\n";
    }
    else
    {
        cout << result << "\n";
    }

    return 0;
}