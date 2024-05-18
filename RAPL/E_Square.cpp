#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
    #endif

    long long i,n;
    cin>>n;
    i=(int)sqrt(n);
    cout<<i*i<<endl;

    return 0;
}