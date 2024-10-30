// https: // www.hackerrank.com/contests/assignment-2-phitron-bootcamp-a-b2/challenges/middle-man-1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> ages(N);

    // Reading the ages
    for (int i = 0; i < N; i++)
    {
        cin >> ages[i];
    }

    // Sort the ages in ascending order
    sort(ages.begin(), ages.end());

    // Output the middle element(s)
    if (N % 2 == 1)
    {
        // If N is odd, output the middle element
        cout << ages[N / 2] << endl;
    }
    else
    {
        // If N is even, output the two middle elements
        cout << ages[(N / 2) - 1] << " " << ages[N / 2] << endl;
    }

    return 0;
}
