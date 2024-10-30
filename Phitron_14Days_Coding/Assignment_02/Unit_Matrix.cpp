// https://www.hackerrank.com/contests/assignment-2-phitron-bootcamp-a-b2/challenges/unit-matrix
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, val;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> val;
            // unit matrix diagonal =1 , rest=0
            if (i == j && val != 1)
            {
                cout << "NO\n";
                return 0;
            }
            else if (i != j && val != 0)
            {
                cout << "NO\n";
                return 0;
            }
        }
    }

    cout << "YES\n";
    return 0;
}