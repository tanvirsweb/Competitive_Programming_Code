#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int llu;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int testCase,a,b,differnce;
    cin>>testCase;
    while(testCase--)
    {
        cin>>a>>b;
        differnce=abs(a-b);
        int ans=0;
        if(differnce%10==0)
            ans=differnce/10;//for differnce=0 or n*10
        else
            ans=(differnce/10)+1;//differnce is other
        cout<<ans<<endl;

    }
    return 0;
}