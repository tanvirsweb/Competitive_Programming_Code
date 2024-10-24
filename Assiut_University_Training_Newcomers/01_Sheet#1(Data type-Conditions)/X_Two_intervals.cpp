// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Reading the input
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    // Calculate the intersection boundaries
    int start = max(l1, l2); // The larger start point
    int end = min(r1, r2);   // The smaller end point

    // Check if there is an intersection
    if (start <= end)
    {
        cout << start << " " << end << endl; // Intersection exists
    }
    else
    {
        cout << -1 << endl; // No intersection
    }

    return 0;
}
