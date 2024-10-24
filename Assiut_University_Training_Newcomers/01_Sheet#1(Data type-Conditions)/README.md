# Assiut University Training - Newcomers: Sheet 1 (Data type - Conditions)

[Codeforce Link>>](https://codeforces.com/group/MWSDmqGsZm/contest/219158)

C++ code by [Tanvir Anjom Siddique]()

## Notes:

### [G_Summation_from_1_to_N](G_Summation_from_1_to_N.cpp)

    // for (int i = 1; i <= n; i++) sum += i; // time limit exceed

    // cout << (int)(n * (n + 1) / 2) << "\n"; // value>int : wrong ans for wong typecasting

    // cout << (long long)(((n + 1) / (double)2.0) * n) << "\n"; wrong ans

    cout << n * (n + 1) / 2 << "\n";

1+2

(2+1)/2 =1 --> 1\*2=2 wrong sum

(2+1)/2.0=1.5 --> 1.5\*2=3 right ans

#### Analysis of the code:

1. Overflow issues:

- If you try to use `int` instead of `long long` for large values of n, the result will `overflow`. The correct sum might exceed the range of a 32-bit integer. That's why typecasting or using int leads to wrong answers.

2. Typecasting and precision issues:

- In the commented-out line, you tried to use floating-point arithmetic with `double`, which can introduce `precision errors`, particularly for `large values` of n.

3. Correct formula:

- The formula `n*(n+1)/2` works perfectly fine if n is sufficiently large and the result is stored in a long long variable, as you've done in the final cout statement.

#### Why previous approaches failed:

1. Iterative approach (commented out for loop):

- This can lead to Time Limit Exceeded `(TLE)` for large values of `n`. Calculating the sum iteratively is inefficient when a direct formula exists.

2. Wrong typecasting `((int)(n * (n + 1) / 2))` :

- Using int truncates large values, leading to wrong answers for larger n. When n is large, n×(n+1)/2 may exceed the limit of a 32-bit integer, so casting it to int causes overflow.

3. Using floating-point arithmetic `((n + 1) / (double)2.0)` :

- Floating-point arithmetic introduces precision errors, and using it in this context is unnecessary and error-prone. Integer arithmetic is both faster and more accurate for this problem.

### [O_Calculator](O_Calculator.cpp)

    // input:
    102-34

    //code
    int n1,n2;
    char ch;
    cin>>n1>>ch>>n2

    // n1=102, ch='-', n2=34

1. `cin>>` will skip over any whitespace characters (such as spaces, tabs, or newlines) when reading input.
   \[here there is no whitespace between inputs. but data type (char) of middle one is different(not int). So, cin>> can differenciate when to stop reading int, when to read char and when to read 2nd int\]

2. When you input 17\*10, the cin first extracts the integer 17 and assigns it to n1.

3. Then it encounters the \* character and assigns it to c.

4. After that, it proceeds to read the second integer 10 and assigns it to n2.

#### Take input from string variable

    string equ; // "15-150"    size = 5
    cin >> equ;

    string num1 = equ.substr(0, indexOpr);
    string num2 = equ.substr(indexOpr + 1);

    int num1Int, num2Int;

    stringstream ss1;
    ss1 << num1;
    ss1 >> num1Int;

    stringstream ss2;
    ss2 << num2;
    ss2 >> num2Int;

### [X_Two_intervals](X_Two_intervals.cpp)

    // Calculate the intersection boundaries [l1,r1], [l2,r2]

    int start = max(l1, l2); // The larger start point
    int end = min(r1, r2); // The smaller end point

    // Check if there is an intersection
    if (start <= end) then Common interval exits.

### [Y_Last_2_digits of `A*B*C*D`](Y_Last_2_digits.cpp)

<b>Key Insight:</b> <br>
When you only need the last two digits of a product, you can use the modulus operation (% 100) to reduce the size of intermediate results, as:

`(a*b*c*d)%100=(( (a%100)*(b%100)*(c%100)*(d%100) )%100)` This approach keeps the intermediate values small and prevents overflow

    result = (a % 100) * (b % 100) % 100;

    result = result * (c % 100) % 100;

    result = result * (d % 100) % 100;

### [Z_Hard_Compare](Z_Hard_Compare.cpp)

<b>Challenge ( A^B > C^D ? ):</b> <br>
Directly calculating A^B and C^D is impractical because the values of B and D can be as large as 10^12 , and powers of such large numbers can quickly exceed computational limits.
Instead of calculating the actual powers, we can use logarithms to compare the two expressions. Using logarithms will allow us to handle large powers without overflow.

    double leftSide = B * log(A)

    double rightSide = D * log(C);
