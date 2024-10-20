// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D
/*
The puzzle consisted of 4
 numbers and his task was to check whether he could get the fourth number using arithmetic operators (+,−,×) between the other three numbers; so that each operator is used only once.
*/
#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((a + b - c) == d || (a + b * c) == d || (a - b + c) == d || (a - b * c) == d || (a * b + c) == d || (a * b - c) == d)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}