// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;

    cin >> a >> op >> b;

    if (op == '<' && a < b)
    {
        cout << "Right\n";
    }
    else if (op == '>' && a > b)
    {
        cout << "Right\n";
    }
    else if (op == '=' && a == b)
    {
        cout << "Right\n";
    }
    else
    {
        cout << "Wrong\n";
    }

    return 0;
}