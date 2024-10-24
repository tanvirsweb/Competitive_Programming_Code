// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O
#include <bits/stdc++.h>
using namespace std;

void solution2()
{

    string equ; // "15-150"    size = 5
    cin >> equ;

    int indexOpr;
    char charOpr;

    for (int i = 0; i <= equ.size() - 1; i++)
    {
        if (equ[i] == '+' || equ[i] == '-' || equ[i] == '*' || equ[i] == '/')
        {
            indexOpr = i;     // 2
            charOpr = equ[i]; // -
            break;
        }
    }

    string num1 = equ.substr(0, indexOpr);
    string num2 = equ.substr(indexOpr + 1);

    int num1Int, num2Int;
    stringstream ss1;
    ss1 << num1;
    ss1 >> num1Int;

    stringstream ss2;
    ss2 << num2;
    ss2 >> num2Int;

    switch (charOpr)
    {
    case '+':
        cout << num1Int + num2Int << endl;
        break;
    case '-':
        cout << num1Int - num2Int << endl;
        break;
    case '*':
        cout << num1Int * num2Int << endl;
        break;
    case '/':
        cout << num1Int / num2Int << endl;
        break;
    }
}

int main()
{
    int n1, n2;
    char c;
    cin >> n1 >> c >> n2;

    if (c == '+')
    {
        cout << n1 + n2 << "\n";
    }
    else if (c == '-')
    {
        cout << n1 - n2 << "\n";
    }
    else if (c == '*')
    {
        cout << n1 * n2 << "\n";
    }
    else if (c == '/')
    {
        cout << n1 / n2 << "\n";
    }

    return 0;
}

/*
1. cin will skip over any whitespace characters (such as spaces, tabs, or newlines) when reading input.
[here there is no whitespace between inputs. but data type (char) of middle one is different(not int). So, cin>> can differenciate when to stop reading int, when to read char and when to read 2nd int]

2. When you input 17*10, the cin first extracts the integer 17 and assigns it to n1.

3. Then it encounters the * character and assigns it to c.

4. After that, it proceeds to read the second integer 10 and assigns it to n2.
*/