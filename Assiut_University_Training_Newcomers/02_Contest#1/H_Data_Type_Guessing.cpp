// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H
#include <iostream>
#include <climits> // For LLONG_MAX
using namespace std;

int main() {
    long long n, k, a; // Use long long to handle large values
    cin >> n >> k >> a;

    // Check for overflow in multiplication first
    if (n > LLONG_MAX / k) {
        cout << "double\n"; // Multiplication would overflow
        return 0;
    }

    long long product = n * k; // Safe multiplication

    // Now check if product / a exceeds int limit
    if (product % a != 0) { // If there's any remainder, it's a double
        cout << "double\n"; 
    } else if (product / a > 2147483647) {
        cout << "long long\n"; // Fits in long long but not int
    } else {
        cout << "int\n"; // Fits in int
    }

    return 0;
}
