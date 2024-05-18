#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int llu;

llu binary_exponentiation(llu base,llu power,llu mod=1e9+7)
{
    llu ans=1;
    while(power)
    {
        if(power%2==1)
        {
            ans=(ans*base)%mod;
            power--;
        }
        else
        {
            base=(base*base)%mod;
            power/=2;
        }
    }
    return ans;
}
int main()
{
    cout<<binary_exponentiation(2,4,100)<<endl;
    return 0;
}