#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int testCase;
    cin>>testCase;

    while(testCase--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        bool ans=true;
        for(int i=0;i<n-1;i++)
        {
            //cout<<arr[i]<<' ';
            if(arr[i+1]-arr[i]>1)
            {
                //if numbers are equal/difference 1 then:we can remove one of them
                //but if not: then at last more than 1 element will exist.So ans is "NO"
                ans=false;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(ans==true)
            cout<<"YES"<<endl;
    }

    return 0;
}