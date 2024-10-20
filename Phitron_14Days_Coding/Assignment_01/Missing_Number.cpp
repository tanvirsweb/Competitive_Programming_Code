// https://www.hackerrank.com/contests/assignment-1-phitron-bootcamp/challenges/missing-number-31-1
#include<iostream>
using namespace std;

int main()
{
    long long t,s,a,b,c;
    cin>>t;
    
    while(t--)
    {
        cin>>s>>a>>b>>c;
        cout<<(s-a-b-c)<<"\n";
    }
    return 0;
}