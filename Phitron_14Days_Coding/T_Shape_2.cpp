// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int space = n - 1, stars = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // in each line space decrease by 1
        space--;

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << "\n";
        // in each line stars increase by 2
        stars += 2;
    }

    return 0;
}
/*
Analyze Shape2:

   *
  ***
 *****
*******

line spaces no-stars
---- ------ --------
1: 3 1
2: 2 3
3: 1 5
4: 0 7

in each line star increase by 2
1st line spaces= n-1
in each line space decrease by 1
*/
