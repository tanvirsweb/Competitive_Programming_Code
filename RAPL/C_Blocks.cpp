#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
    #endif

    int n,m;
    cin>>n>>m;
    cout<<(n-1)*(m-1)<<endl;
    
    return 0;
}