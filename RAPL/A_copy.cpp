//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
    #endif

    int a,b,c;
    cin>>a>>b>>c;
    if(a==b)
    {
        cout<<c<<endl;
    }
    else if(a==c)
    {
        cout<<b<<endl;
    }
    else
    {
        cout<<a<<endl;
    }

    return 0;
}