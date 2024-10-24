// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z
#include <iostream>
#include <cmath> // For log function
using namespace std;

/*
Challenge:
Directly calculating
A^B and C^D is impractical because the values of B and D can be as large as 10^12 , and powers of such large numbers can quickly exceed computational limits.
Instead of calculating the actual powers, we can use logarithms to compare the two expressions. Using logarithms will allow us to handle large powers without overflow.
*/
int main()
{
    // Input
    double A, B, C, D;
    cin >> A >> B >> C >> D;

    // Using logarithms to compare A^B and C^D
    double leftSide = B * log(A);  // log(A^B)
    double rightSide = D * log(C); // log(C^D)

    // Compare and output the result
    if (leftSide > rightSide)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
