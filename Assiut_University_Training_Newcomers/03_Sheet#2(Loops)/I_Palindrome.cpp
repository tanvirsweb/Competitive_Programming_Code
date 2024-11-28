// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
/*

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int myRes1, myRes2;
    //                        0   1   2   3
    string num1; // "160"   ['1,'6','0']
    cin >> num1;
    int size = num1.size();      // 3
    char *num2 = new char[size]; // ['0','6','1']
    int counter = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        num2[counter] = num1[i];
        counter++;
    }
    stringstream s1;
    s1 << num1;
    s1 >> myRes1; // 160
    stringstream s2;
    s2 << num2;
    s2 >> myRes2; // 61
    cout << myRes2 << endl;
    if (myRes1 == myRes2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
*/
/*
The code snippet you provided attempts to solve the problem of checking whether a given number
𝑁
N is a palindrome and reversing it without leading zeroes. However, the issue lies in the logic for reversing the string and converting it back to an integer.

Observed Problems:
Dynamic Memory Allocation Issue: The code allocates memory dynamically for num2, but it does not null-terminate the character array. This can cause undefined behavior when converting num2 to a string or integer.
Reversal Logic: The reversed string is stored in num2, but it is not managed correctly as a valid C++ string, leading to incorrect outputs or memory issues.
Leading Zero Handling: The conversion of the reversed string (num2) to an integer is unnecessary and prone to errors.
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string num1;
    cin >> num1;

    // Reverse the string
    string num2 = num1;
    reverse(num2.begin(), num2.end());

    // Remove leading zeros from the reversed string
    while (!num2.empty() && num2[0] == '0')
    {
        num2.erase(0, 1);
    }

    // If the string becomes empty after removing leading zeros, it's "0"
    if (num2.empty())
    {
        num2 = "0";
    }

    // Print the reversed number
    cout << num2 << endl;

    // Check if the original number is a palindrome
    if (num1 == num2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
