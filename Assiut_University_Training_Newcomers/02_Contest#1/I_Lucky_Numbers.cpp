// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // or cin>> ch1>>ch0; d1=ch1-'0'; d2=ch0-'0'
    int d1 = n / 10;
    int d0 = n % 10;
    // cout << d1 << d0 << endl;

    // edge case: No number is divisible by 0
    // here 2 digit number --> d1!=0 , but d0=0 is possible so we need to check it

    // if ((d1 % d0 == 0 && d0 != 0) || (d0 % d1 == 0 && d1 != 0)) // provide wrong ans
    // expression runs Left to Right so check d0!=0 first to prevent evaluating d1%d0=d1%0=undefined
    // when n = 10, you get d1 = 1 and d0 = 0. This leads to checking 1 % 0, which is undefined

    if ((d0 != 0 && d1 % d0 == 0) || (d1 != 0 && d0 % d1 == 0))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
