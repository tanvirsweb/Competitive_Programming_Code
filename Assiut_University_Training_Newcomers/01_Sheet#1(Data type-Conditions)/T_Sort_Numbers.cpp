// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n1, n2, n3, min, mid, max;
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2 && n1 >= n3)
    {
        max = n1;
        if (n2 >= n3)
        {
            mid = n2;
            min = n3;
        }
        else
        {
            mid = n3;
            min = n2;
        }
    }
    else if (n2 > n1 && n2 >= n3)
    {
        max = n2;
        if (n1 >= n3)
        {
            mid = n1;
            min = n3;
        }
        else
        {
            mid = n3;
            min = n1;
        }
    }
    else if (n3 > n1 && n3 > n2)
    {
        max = n3;
        if (n1 >= n2)
        {
            mid = n1;
            min = n2;
        }
        else
        {
            mid = n2;
            min = n1;
        }
    }

    cout << min << "\n"
         << mid << "\n"
         << max << "\n\n"
         << n1 << "\n"
         << n2 << "\n"
         << n3 << "\n";

    return 0;
}