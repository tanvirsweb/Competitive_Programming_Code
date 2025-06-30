### [A_Very_Big_Sum](https://www.hackerrank.com/challenges/a-very-big-sum/problem?isFullScreen=true)

```cpp
long aVeryBigSum(vector<long> ar)
{
    long long sum = 0;
    for (size_t i = 0; i < ar.size(); i++)
    {
        sum += ar[i];
    }
    return sum;
}
```

### [Diagonal_Difference_Of_Matrix](https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true)

```cpp
int diagonalDifferenceOfMatrix(vector<vector<int>> arr) {
    int sum_d1 = 0, sum_d2 = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        sum_d1 += arr[i][i];           // Primary diagonal
        sum_d2 += arr[i][n - i - 1];    // Secondary diagonal
    }
    return abs(sum_d1 - sum_d2);
}
```

### [Plus_Minus](https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true)

```cpp
void plusMinus(vector<int> arr) {
    size_t n = arr.size();
    double cnt_pos=0, cnt_neg=0, cnt_zero=0;

    for(size_t i=0;i<n;i++)
    {
        if(arr[i]>0) cnt_pos++;
        else if(arr[i]<0) cnt_neg++;
        else cnt_zero++;
    }

    cout << fixed << setprecision(6) << (cnt_pos/n) <<"\n" << (cnt_neg/n) <<"\n" << (cnt_zero/n) <<"\n";
}
```

### [Staircase](https://www.hackerrank.com/challenges/staircase/problem?isFullScreen=true)

<pre>
Sample Input
6
Sample Output
     #
    ##
   ###
  ####
 #####
######
</pre>

```cpp
void staircase(int n) {
    int space = n-1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"#";
        }
        cout<<"\n";
        space--;
    }
}
```

### [Mini_Max_Sum](https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=true)

<pre>
n size array
min sum of n-1 elements
max su of n-1 elements
</pre>

```cpp
void miniMaxSum(vector<int> arr) {
    long long sum=0;
    int min = arr[0] ,max = arr[0];

    for(size_t i=0;i<arr.size();i++)
    {
        max = (arr[i]>max) ? arr[i] : max;
        min = (arr[i]<min) ? arr[i] : min;
        sum+=arr[i];
    }
    cout<<(sum-max)<<" "<<(sum-min)<<"\n";
}
```

### [Birthday_Cake_Candles](https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true)

```cpp
int birthdayCakeCandles(vector<int> candles) {
    int max = candles[0];
    int cnt_max =0;

    for(size_t i=0;i<candles.size();i++) max = (candles[i]>max) ? candles[i] : max;

    for(size_t i=0;i<candles.size();i++)
    {
        if(candles[i]==max) cnt_max++;
    }

    return cnt_max;
}
```

### [\*\*\* Time_Conversion](https://www.hackerrank.com/challenges/time-conversion/problem?isFullScreen=true)

<pre>
Given a time in -hour AM/PM format, convert it to military (24-hour) time.

Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

Example

S = '12:01:00PM'
Return '12:01:00'.

S = '00:01:00AM'
Return '00:01:00'.
</pre>

```cpp
string timeConversion(string s) {
    string hour_str = s.substr(0, 2);  // Extract the hour part
    int hour = stoi(hour_str);         // Convert hour part to integer
    string period = s.substr(8, 2);    // Extract AM or PM

    if (period == "AM") {
        if (hour == 12) {
            hour = 0; // Convert 12 AM to 00 in 24-hour format
        }
    } else { // PM case
        if (hour != 12) {
            hour += 12; // Convert PM hour to 24-hour format
        }
    }

    // Format hour to ensure two digits and return the full time in 24-hour format
    return (hour < 10 ? "0" : "") + to_string(hour) + s.substr(2, 6);
}

```
