#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int X, V;
    cin >> X >> V;

    // Update the X-th index to V
    A[X] = V;

    // Print the array in reverse order
    for (int i = N - 1; i >= 0; i--)
    {
        cout << A[i] << " ";
    }

    return 0;
}
