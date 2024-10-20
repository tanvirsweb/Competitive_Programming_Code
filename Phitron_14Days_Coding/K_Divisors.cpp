// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K
#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << "\n";
        }
    }

    return 0;
}