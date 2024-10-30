// https://www.hackerrank.com/contests/assignment-2-phitron-bootcamp-a-b2/challenges/reverse-and-even
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << "\n";

    return 0;
}