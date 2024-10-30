// https://www.hackerrank.com/contests/assignment-2-phitron-bootcamp-a-b2/challenges/count-before-one-1
#include <bits/stdc++.h>
using namespace std;

// Function to count elements before the first occurrence of 1
inline int count_before_one(const int A[], int N)
{
    for (int i = 0; i < N; i++)
    {
        if (A[i] == 1)
        {
            return i; // Return the index as the count before 1
        }
    }
    return N; // If 1 is not found, return N (all elements counted)
}

int main()
{
    int N;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // Call the function and print the result
    int count = count_before_one(A, N);
    // cout << count << endl;
    printf("%d\n", count);

    return 0;
}
