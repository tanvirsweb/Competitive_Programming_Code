// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q
#include <bits/stdc++.h>
using namespace std;

/*
Note:
Print Q1, Q2, Q3, Q4 according to the quarter in which the point belongs to.
Print "Origem" If the point is at the origin.
Print "Eixo X" If the point is over X axis.
Print "Eixo Y" if the point is over Y axis.
*/

int main()
{
    double x, y;
    cin >> x >> y;

    if (x == 0 && y == 0)
    {
        cout << "Origem" << "\n";
    }
    else if (x == 0 && y != 0)
    {
        cout << "Eixo Y" << "\n";
    }
    else if (x != 0 && y == 0)
    {
        cout << "Eixo X" << "\n";
    }

    else if (x > 0 && y > 0)
    {
        cout << "Q1\n";
    }
    else if (x < 0 && y > 0)
    {
        cout << "Q2\n";
    }
    else if (x < 0 && y < 0)
    {
        cout << "Q3\n";
    }
    else if (x > 0 && y < 0)
    {
        cout << "Q4\n";
    }

    return 0;
}