### [Sheet \#2][sheet-2]

[![LinkedIn][linkedin-shield]][linkedin-url]

#### [I_Palindrome][I]

<details>
<summary>Palindrome, string reverse(), empty(), erase()</summary>

```cpp
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

```

</details>

[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/in/tanvir-anjom-siddique-50028a205
[sheet-2]: https://codeforces.com/group/MWSDmqGsZm/contest/219432
[I]: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I


```git
stage files:
    git add filename
    git add . (stage all)
    git add -A
    git add -all

unstage file:
    git reset filename
    git reset (unstage all)

discard changes after stage:
    git checkout -- filename
    git restore filename (better latest approach)
    
```