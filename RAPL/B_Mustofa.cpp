//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
    #endif
    int n,a,b;
    cin>>n>>a>>b;
    if(a*n>b)
        cout<<b<<endl;
    else
        cout<<a*n<<endl;
        
    return 0;
}