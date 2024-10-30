// https://www.hackerrank.com/contests/assignment-2-phitron-bootcamp-a-b2/challenges/count-it-2-2
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    getline(cin, S); // Read the entire line, including spaces

    int capitalCount = 0, smallCount = 0, spaceCount = 0;

    for (char ch : S)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            capitalCount++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            smallCount++;
        }
        else if (ch == ' ')
        {
            spaceCount++;
        }
    }

    cout << "Capital - " << capitalCount << "\n";
    cout << "Small - " << smallCount << "\n";
    cout << "Spaces - " << spaceCount << "\n";

    return 0;
}
