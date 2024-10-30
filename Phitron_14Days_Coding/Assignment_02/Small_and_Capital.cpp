// https://www.hackerrank.com/contests/assignment-2-phitron-bootcamp-a-b2/challenges/small-and-capital
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num_capital = 0, num_lower = 0;
    string s;
    cin >> s;

    // s.size() returns a value of type size_t (an unsigned integer)
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            num_lower++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            num_capital++;
        }
    }

    cout << num_capital << " " << num_lower << "\n";

    return 0;
}