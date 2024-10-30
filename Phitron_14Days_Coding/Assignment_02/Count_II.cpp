// https://www.hackerrank.com/contests/assignment-2-phitron-bootcamp-a-b2/challenges/count-2-1-1
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cnt_vowel = 0;
    string s;
    cin >> s;

    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            cnt_vowel++;
        }
    }

    cout << cnt_vowel << "\n";
    return 0;
}