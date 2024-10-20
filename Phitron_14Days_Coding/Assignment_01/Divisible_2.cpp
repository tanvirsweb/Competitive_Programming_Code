// https://www.hackerrank.com/contests/assignment-1-phitron-bootcamp/challenges/divisible-2-1-1
#include<iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    // min number divisible by both 3 and 7 is 21
    for(int i=21;i<=n;i++)
    {
        if(i%3==0 && i%7==0)
        {
            cout<<i<<"\n";
        }
    }
    return 0;
}