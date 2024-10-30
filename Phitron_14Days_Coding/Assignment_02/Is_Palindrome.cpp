// https://www.hackerrank.com/contests/assignment-2-phitron-bootcamp-a-b2/challenges/is-palindrome-15
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

// Function to check if the string is a palindrome
int is_palindrome(const string &S)
{
    int left = 0;
    int right = S.length() - 1;

    // Check characters from both ends towards the center
    while (left < right)
    {
        if (S[left] != S[right])
        {
            return 0; // Not a palindrome
        }
        left++;
        right--;
    }
    return 1; // Is a palindrome
}

int main()
{
    string S;
    cin >> S; // Read the input string

    // Call the palindrome checking function and receive the result
    int result = is_palindrome(S);

    // Print the appropriate message based on the result
    if (result == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    // cout<< --> not printed inside main()

    return 0;
}
