// https://www.hackerrank.com/contests/assignment-1-phitron-bootcamp/challenges/jingle-bell
#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Height of the tree
    int height = 6+(int)(N/2);
    int space=height-1;
    
    // Print the upper part of the tree
    for (int i = 1; i <= height; i++) {
        // Print leading spaces
        
        for (int j = 1; j <= space;j++) {
            cout << " ";            
        }
        space--;

        // Print stars (odd numbers)
        for (int j = 0; j < 2 * (i-1) + 1; j++) {
            cout << "*";
        }
        // Move to the next line
        cout << "\n";
    }

    for (int i=1;i<=5;i++) {
        // Print leading spaces for trunk
        for (int j=1;j<=5;j++) {
            cout << " ";
        }
        // Print trunk
        for (int j = 0; j < N; j++) {
            cout << "*";
        }
        // Move to the next line
        cout << "\n";
    }

    return 0;
}
