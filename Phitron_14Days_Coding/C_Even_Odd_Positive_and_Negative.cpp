// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
#include <iostream>
using namespace std;

int main()
{
    int even = 0, odd = 0, pos = 0, neg = 0, n;
    long long val;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> val;

        // even/odd
        if (val % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        // pos/neg/0
        if (val > 0)
        {
            pos++;
        }
        else if (val < 0)
        {
            neg++;
        }
    }

    cout << "Even: " << even << "\n";
    cout << "Odd: " << odd << "\n";
    cout << "Positive: " << pos << "\n";
    cout << "Negative: " << neg << "\n";

    return 0;
}