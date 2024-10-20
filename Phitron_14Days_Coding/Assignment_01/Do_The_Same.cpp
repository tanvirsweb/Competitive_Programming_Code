// https://www.hackerrank.com/contests/assignment-1-phitron-bootcamp/challenges/do-the-same
#include<iostream>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;

    // print 1 to n ,k times
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}