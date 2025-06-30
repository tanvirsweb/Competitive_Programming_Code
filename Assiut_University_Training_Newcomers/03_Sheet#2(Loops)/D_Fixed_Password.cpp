// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int pass = 1999, n;

    while (1)
    {
        cin >> n;
        if (n == pass)
        {
            cout << "Correct\n";
            break;
        }
        else
        {
            cout << "Wrong\n";
        }
    }
    return 0;
}