#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin >> n;

    string min_str = n, max_str = n;

    sort(min_str.begin(), min_str.end());   // ascending
    sort(max_str.rbegin(), max_str.rend()); // descending

    long long min_num = stoll(min_str);
    long long max_num = stoll(max_str);

    cout << max_num - min_num << '\n';
    return 0;
}
