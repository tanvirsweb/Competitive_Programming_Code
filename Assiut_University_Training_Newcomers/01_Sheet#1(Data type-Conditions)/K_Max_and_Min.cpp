// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
#include <bits/stdc++.h>
using namespace std;

void solution2()
{
    long long num1, num2, num3, max_, min_;
    cin >> num1 >> num2 >> num3;

    min_ = min(num1, min(num2, num3));
    max_ = max(num1, max(num2, num3));

    cout << min_ << " " << max_ << endl;
}

int main()
{
    // solution2();
    long long max, min, a, b, c;
    cin >> a;
    max = min = a;

    cin >> b;
    if (b > max)
    {
        max = b;
    }
    if (b < min)
    {
        min = b;
    }

    cin >> c;
    if (c > max)
    {
        max = c;
    }
    if (c < min)
    {
        min = c;
    }
    cout << min << " " << max << "\n";

    return 0;
}
