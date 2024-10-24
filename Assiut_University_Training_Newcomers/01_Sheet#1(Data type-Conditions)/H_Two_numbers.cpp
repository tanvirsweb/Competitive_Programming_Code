// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H
#include <bits/stdc++.h>
using namespace std;

// Custom implementation of floor function
int custom_floor(double num)
{
    int int_part = (int)num;
    // int(-1.5) = -1 , floor(-1.5): -1-1 [num<0]
    // int(1.5) = 1 , floor(1.5): 1 [num>0]
    if (num < 0 && num != int_part)
    {
        return int_part - 1;
    }
    return int_part;
}

// Custom implementation of ceil function
int custom_ceil(double num)
{
    int int_part = (int)num;
    // (int)(1.5) = 1 , ceil(1.5): 1+1 [num>0]
    // (int)(-1.5) = -1 , ceil(-1.5): -1 [num<0]
    if (num > 0 && num != int_part)
    {
        return int_part + 1;
    }
    return int_part;
}

// Custom implementation of round function
int custom_round(double num)
{
    if (num - (int)num >= 0.5)
    {
        return custom_floor(num + 0.5);
    }
    else
    {
        return custom_floor(num);
    }
}

int main()
{
    double num1, num2;
    cin >> num1 >> num2;
    double result = num1 / num2;

    cout << "floor " << num1 << " / " << num2 << " = " << custom_floor(result) << endl;
    cout << "ceil " << num1 << " / " << num2 << " = " << custom_ceil(result) << endl;
    cout << "round " << num1 << " / " << num2 << " = " << custom_round(result) << endl;
    // c++ provide this functions itself: floor(), ceil(), round()

    return 0;
}
