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
    int k,r,price,minN;
    cin>>k>>r;
    for(int i=1;;i++)//minimum 1 is needed to buy
    {
        price=k*i;
        if(price%10==0 || price%10==r)
        {
            minN=i;
            break;
        }
    }
    cout<<minN<<endl;

    return 0;
}