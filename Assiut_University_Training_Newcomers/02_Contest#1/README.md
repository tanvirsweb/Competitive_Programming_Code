# [Contest\#1 solution](https://codeforces.com/group/MWSDmqGsZm/contest/326175)

by [Tanvir Anjom Siddique]()
<br>
clik on below links to get some codes of this contest stored in another folder.

- [B_Memo_and_Momo](../../Phitron_14Days_Coding/B_Memo_and_Momo.cpp)
- [C_Next_Alphabet](../../Phitron_14Days_Coding/C_Next_Alphabet.cpp)
- [D_Ali_Baba_and_Puzzles](../../Phitron_14Days_Coding/D_Ali_Baba_and_Puzzles.cpp)

## [E_Interval_Sweep](E_Interval_Sweep.cpp)

Find interval [l,l+1,l+2...,r] where, a= number of odd, b= number of even numbers. And Interval should be non-empty. Print YES if such interval exits.

- If `a==0 && b==0` it means that there are `no odd and no even` numbers required. In this case, the interval would be `EMPTY`
- In any `interval of CONSECUTIVE numbers, ODD and EVEN numbers ALTERNATE`.
- The most we can have in any interval where : (no_ODD = no_EVEN) or, (no_ODD = no_EVEN + 1) or, (no_ODD + 1 = no_EVEN)

<h3>Interval Even and Odd Counts</h3>
<table border="1" cellpadding="5" cellspacing="0" style="border-collapse: collapse;">
  <tr>
    <th>Interval</th>
    <th>Numbers</th>
    <th>Even Count</th>
    <th>Odd Count</th>
    <th>no_Even - no_Odd</th>
  </tr>
  <tr>
    <td>[2, 6]</td>
    <td>2, 3, 4, 5, 6</td>
    <td>3</td>
    <td>2</td>
    <td>1</td>
  </tr>
  <tr>
    <td>[2, 7]</td>
    <td>2, 3, 4, 5, 6, 7</td>
    <td>3</td>
    <td>3</td>
    <td>0</td>
  </tr>
  <tr>
    <td>[3, 6]</td>
    <td>3, 4, 5, 6</td>
    <td>2</td>
    <td>2</td>
    <td>0</td>
  </tr>
  <tr>
    <td>[3, 7]</td>
    <td>3, 4, 5, 6, 7</td>
    <td>2</td>
    <td>3</td>
    <td>-1</td>
  </tr>
</table>

`code:`

```cpp
    if ((a == 0 && b == 0) || abs(a - b) >= 2)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
```

## [F_Adding_Bits](F_Adding_Bits.cpp)

- a xor b = Bitwise Addition without any carry (always carry =0)
- a, b, result = 32 bit unsigned int

## [G_Katryoshka](G_Katryoshka.cpp)

This repository contains a solution to the Katryoshka problem, in which we need to maximize the number of dolls ("Katryoshkas") that can be created given a limited number of eyes, mouths, and bodies.

### Problem Description

To make one Katryoshka, the following combinations of pieces can be used:

1. **2 eyes, 0 mouths, and 1 body**
2. **2 eyes, 1 mouth, and 1 body**
3. **1 eye, 1 mouth, and 1 body**

Given the quantities of each piece (eyes, mouths, and bodies), our goal is to calculate the maximum number of Katryoshkas that can be assembled.

#### Input

The program takes one line of input containing three integers separated by spaces:

- `n` (number of eyes)
- `m` (number of mouths)
- `k` (number of bodies)

<p> All values satisfy: <code>0 &le; n, m, k &le; 10<sup>18</sup></code>. </p>

### Output

The output is a single integer representing the maximum number of Katryoshkas that can be assembled.

### Example

**Input**
90 24 89
**Output**
57

## Solution Approach

The solution follows these steps:

1. **Edge Case Check**: If either `eyes` or `body` is zero, we cannot create any dolls because at least one eye and one body are required. The program outputs `0` and exits.

2. **First Combination (1 eye, 1 mouth, 1 body)**:

   - If there are enough mouths, we use the minimum of `eyes`, `mouth`, and `body` pieces to maximize the dolls created with this combination.
   - We increment the `counter` by this minimum, then decrement the `eyes`, `mouth`, and `body` values accordingly.

3. **Second Combination (2 eyes, 0 mouth, 1 body)**:

   - If there are still eyes and bodies left, we use the remaining pieces in this combination.
   - Since this combination uses 2 eyes, we halve the `eyes` count (using integer division) and then take the minimum of `eyes` and `body` as the number of additional dolls we can make.
   - We add this minimum to the `counter`.

4. **Output Result**: Finally, we output the `counter`, which holds the maximum number of Katryoshkas that can be assembled.

## Code Explanation

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long eyes, mouth, body;
    cin >> eyes >> mouth >> body;

    long long counter = 0;
    if (eyes == 0 || body == 0)
    {
        cout << 0;
        return 0;
    }

    // Attempt to use the (1 eye, 1 mouth, 1 body) combination first
    if (mouth > 0)
    {
        long long min_ = min(eyes, min(body, mouth));
        counter += min_;
        eyes -= min_;
        mouth -= min_;
        body -= min_;
    }

    // If there are remaining eyes and bodies, use the (2 eyes, 0 mouth, 1 body) combination
    if (eyes > 0 && body > 0)
    {
        eyes /= 2;
        long long min_ = min(eyes, body);
        counter += min_;
    }

    cout << counter << "\n";

    return 0;
}
```

## [H_Data_Type_Guessing](H_Data_Type_Guessing.cpp)

`wrong ans1:`

```cpp
    #include <iostream>
    #include <climits> // Include this header for LLONG_MAX
    using namespace std;

    int main()
    {
        long long n, k, a; // Use long long to handle large values
        cin >> n >> k >> a;

        double ans = k / a;
        ans = n * ans; // n*k/a
        long long l = ans;

        if (ans != l)
        {
            cout << "double\n";
        }
        else if (l > 2147483647)
        {                          // Check if result exceeds int limit
            cout << "long long\n"; // Fits in long long but not int
        }
        else
        {
            cout << "int\n"; // Fits in int
        }

        return 0;
    }
```

<pre>
→Judgement Protocol
Test: #5, time: 46 ms., memory: 36 KB, exit code: 0, checker exit code: 1, verdict: WRONG_ANSWER
Input
86294906 292379617 104468026
Output
int
Answer
double
Checker Log
wrong answer 1st lines differ - expected: 'double', found: 'int'
close
</pre>

#### Issues in the Current Code:

- Division Before Multiplication: When you calculate double ans = k / a, you are performing `integer division` since both k and a are long long. If k is smaller than a, this will `yield 0`, leading to incorrect results.

- Precision Issues: By converting the result back to a long long and comparing it to the original ans, you risk overlooking cases where ans is a fraction. This can cause an incorrect classification as int instead of double.

- Edge Cases: The method fails to handle cases where `n\k `could still produce a double that doesn't fit within the bounds of int.

`wrong ans2:`

```cpp
    double ans = k / (double)a;
    ans = n * ans; // n*k/a

    if (ans != (long long)ans )
    {
        cout << "double\n";
    }
```

This operation could be problematic:

- Division First: By dividing k by a first, you may introduce floating-point precision issues. If the result of `k/a is very small`, multiplying by n might not correctly reflect the expected value of n\*k/a.
- Loss of Precision: This division might lead to `rounding errors or loss of precision`, especially if `a is large`.
- Type Checking: The condition `if (ans != (long long)ans)` checks if the result is a whole number. If it is not, it outputs double. This is not a safe way to determine if (n\*k/a) could be considered an integer, as floating-point arithmetic can introduce inaccuracies.

wrong ans:

```cpp
    double num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    double result = (num1 * num2) / num3;
    long long myNumber = result;
    double myRes = result - myNumber;

    if (myRes > 0)
    {
        cout << "double" << "\n";
    }
    else if (myNumber <= 2147483647)
    {
        cout << "int" << "\n";
    }
    else
    {
        cout << "long long" << "\n";
    }
```

<pre>
→Judgement Protocol
Test: #3, time: 46 ms., memory: 44 KB, exit code: 0, checker exit code: 1, verdict: WRONG_ANSWER  
Input: 
2147483647 249010911 249010911
Output:
double  
Answer:

int
Checker Log
wrong answer 1st lines differ - expected: 'int', found: 'double'
</pre>

#### Issues in Your Code

- Precision Errors: Using double precision may introduce small inaccuracies that can lead to false positives when checking if the number is an integer.
- Checking Logic: The current logic checks if the result has any decimal part after casting it to a long long. If result is precisely an integer, it should not classify it as "double".

Even below code provide wrong ans:

```cpp
    // Calculate the result
    double result = (num1 * num2) / num3;

    // Use a long long to check if result is an integer
    long long myNumber = static_cast<long long>(result);

    // Check if myNumber is equal to result to confirm it's an integer
    if (result == myNumber){...}
```

## RIGHT Ans:

```cpp
    // Check for overflow in multiplication first
    if (n > LLONG_MAX / k) {
        cout << "double\n"; // Multiplication would overflow
        return 0;
    }

    long long product = n * k; // Safe multiplication

    // Now check if product / a exceeds int limit
    if (product % a != 0) { // If there's any remainder, it's a double
        cout << "double\n";
    }
```

## [I_Lucky_Numbers](I_Lucky_Numbers.cpp)

- Edge case: No number is divisible by 0
- here 2 digit number --> d1!=0 , but d0=0 is possible so we need to check it

`Wrrong Code:`

```cpp
    if ((d1 % d0 == 0 && d0 != 0) || (d0 % d1 == 0 && d1 != 0))
    {
        cout << "YES\n";
    }
```

- Expression evaluates `Left to Right` so `check d0!=0 first` to `prevent evaluating d1%d0=d1%0=undefined`
- when n = 10, you get d1 = 1 and d0 = 0. This leads to checking 1 % 0, which is undefined

```cpp
    if ((d0 != 0 && d1 % d0 == 0) || (d1 != 0 && d0 % d1 == 0))
    {
        cout << "YES\n";
    }

```
