// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double X, P;
    cin >> X >> P;

    // P = discounted price, X= discount in %
    // P = originalPrice *(1- X/100.0)
    double originalPrice = P / (1 - X / 100.0);

    // Print the result rounded to two decimal places
    cout << fixed << setprecision(2) << originalPrice << endl;

    return 0;
}
