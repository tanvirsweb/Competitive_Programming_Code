// https://www.hackerrank.com/contests/assignment-2-phitron-bootcamp-a-b2/challenges/find-it-2-5
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num, num_cnt = 0;
    ;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> num;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            num_cnt++;
        }
    }

    cout << num_cnt << "\n";
    return 0;
}