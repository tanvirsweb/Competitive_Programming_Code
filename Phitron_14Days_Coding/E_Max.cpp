// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E
#include <iostream>
using namespace std;

int main()
{
    long long n, val, max;
    // input: num_values 1st_value
    cin >> n >> val;

    max = val;
    // input rest num_vlaues-1 no of values
    for (int i = 1; i <= n - 1; i++)
    {
        cin >> val;
        if (val > max)
        {
            max = val;
        }
    }
    cout << max << "\n";

    return 0;
}