// https: // www.hackerrank.com/contests/assignment-2-phitron-bootcamp-a-b2/challenges/even-and-odd-8-2
#include <bits/stdc++.h>
using namespace std;

// Function to count and print even and odd numbers
void odd_even()
{
    int N, Val;
    cin >> N;

    int even_count = 0;
    int odd_count = 0;

    // take a vector as input and Count even and odd numbers
    for (int i = 0; i < N; i++)
    {
        cin >> Val;
        if (Val % 2 == 0)
        {
            even_count++; // Increment even count
        }
        else
        {
            odd_count++; // Increment odd count
        }
    }

    // Print the results
    cout << even_count << " " << odd_count << endl;
}

int main()
{
    odd_even(); // Call the function to execute the task
    return 0;
}
