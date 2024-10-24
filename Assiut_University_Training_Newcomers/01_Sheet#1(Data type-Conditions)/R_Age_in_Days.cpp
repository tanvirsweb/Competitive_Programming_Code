// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, rem;
    cin >> n;

    // n = year*365 + rem days
    int year = n / 365;
    cout << year << " years\n";

    rem = n % 365;
    int month = rem / 30;
    cout << month << " months\n";

    rem = rem % 30;
    cout << rem << " days\n";

    return 0;
}