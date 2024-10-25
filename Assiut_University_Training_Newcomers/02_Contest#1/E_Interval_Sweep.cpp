// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;

    // find interval [l,l+1,l+2...,r] a= number of odd, b= number of even
    // f both num1 and num2 are zero, it means that there are no odd and no even numbers required. In this case, the interval would be EMPTY
    // In any interval of CONSECUTIVE numbers, "ODD and EVEN numbers ALTERNATE".

    if ((a == 0 && b == 0) || abs(a - b) >= 2)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }

    return 0;
}