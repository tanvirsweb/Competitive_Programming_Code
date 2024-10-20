// https://www.hackerrank.com/contests/assignment-1-phitron-bootcamp/challenges/pattern-2-21-4
#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;

    // Loop for each row
    for (int i=1;i<=N;++i) {
        // Print leading spaces
        for (int j=1;j<=N-i;j++) {
            cout << " ";
        }
        // Print numbers in decreasing order
        for (int j=i;j>=1;j--) {
            cout<<j;
        }
        cout<<"\n";
    }

    return 0;
}