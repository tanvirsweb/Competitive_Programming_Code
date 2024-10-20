// https://www.hackerrank.com/contests/assignment-1-phitron-bootcamp/challenges/can-you-do-it-2-2
#include<iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    //  N is a negative number or zero print from N to 1
    if(n<=0)
    {
        for(int i=n;i<=1;i++)
        {
            cout<<i<<" ";
        }
    }
    else 
    {
        for(int i=1;i<=n;i++)
        {
            cout<<i<<" ";
        }
    }
    cout<<"\n";
    return 0;
}