// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/H
#include<iostream>
using namespace std;

int main()
{
    long long x=-1,y=-1,n;
    cin>>n;

    for(int i=1; i*i <= n;i++)
    {
        for(int j=1; j*j <=n; j++){
            if((i*i+j*j)%n==0)
            {
                cout<<i<<" "<<j<<"\n";
                return 0;
            }
        }
    }
    cout<<"No solutions\n";
    return 0;
}