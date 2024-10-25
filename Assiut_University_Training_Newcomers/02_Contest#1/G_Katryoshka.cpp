// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    He can form a nice Katryoshka using one of the following combinations:
    2 eyes, 0 mouth, and 1 body.
    2 eyes, 1 mouth, and 1 body.
    1 eye, 1 mouth, and 1 body.
    */
    long long eyes, mouth, body;
    cin >> eyes >> mouth >> body;

    long long counter = 0;
    if (eyes == 0 || body == 0)
    {
        cout << 0;
        return 0;
    }

    // 24 90 80
    if (mouth > 0)
    {
        long long min_ = min(eyes, min(body, mouth));
        // use: 1 eye, 1 mouth, and 1 body For making each
        counter += min_;
        eyes -= min_;
        mouth -= min_;
        body -= min_;
    }

    if (eyes > 0 && body > 0)
    {
        // use: 2 eyes, 0 mouth, and 1 body.
        eyes /= 2;
        long long min_ = min(eyes, body);
        counter += min_;
    }

    cout << counter << "\n";

    return 0;
}