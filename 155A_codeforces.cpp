#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n,cntGoodPoints=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int minUntillNow=arr[0],maxUntillNow=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<minUntillNow)
        {
            minUntillNow=arr[i];
            cntGoodPoints++;
        }
        if(arr[i]>maxUntillNow)
        {
            maxUntillNow=arr[i];
            cntGoodPoints++;
        }
    }
    cout<<cntGoodPoints<<endl;
    return 0;
}