// https://www.hackerrank.com/contests/assignment-2-phitron-bootcamp-a-b2/challenges/count-iii
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int cnt[26] = {0};

    for (size_t i = 0; i < s.size(); i++)
    {
        cnt[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        cout << (char)(i + 'a') << " - " << cnt[i] << "\n";
    }

    return 0;
}