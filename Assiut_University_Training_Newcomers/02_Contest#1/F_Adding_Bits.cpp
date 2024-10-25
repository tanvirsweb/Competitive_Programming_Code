// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/F
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    // a xor b = bitwise addition without any carry (always carry =0)
    cout<<(a^b)<<"\n";

    return 0;
}