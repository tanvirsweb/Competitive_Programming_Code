// https://www.hackerrank.com/contests/assignment-2-phitron-bootcamp-a-b2/challenges/count-i
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, val, cnt_even = 0, cnt_odd = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> val;
        if (val % 2 == 0)
        {
            cnt_even++;
        }
        else
        {
            cnt_odd++;
        }
    }

    cout << cnt_even << " " << cnt_odd << "\n";
    return 0;
}