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

    int a[4],maxIndex=0;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
        if(a[i]>a[maxIndex])
            maxIndex=i;
    }
    for(int i=0,cnt=0;i<4;i++)
    {
        if(i!=maxIndex )
        {
            cnt++;
            if(cnt!=3)
                cout<<a[maxIndex]-a[i]<<" ";
            else
                cout<<a[maxIndex]-a[i]<<"\n";
        }
            
    }
//since all numbers are positive.we assume that maximum number is the sum of them.
//or sort arr[] and cout<<arr[3]-arr[0]<<" "<<arr[3]-arr[1]....<<endl;
    return 0;
}