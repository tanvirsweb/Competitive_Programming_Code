#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int eventNum,untreated=0,activePoliceNow=0;
    cin>>eventNum;
    int arr[eventNum];

    for(int i=0;i<eventNum;i++)
    {
        cin>>arr[i];

        if(arr[i]>0)
            activePoliceNow += arr[i];
        else if(arr[i]<0)
        {
            if(activePoliceNow<abs(arr[i]))
            {
                untreated+=abs(arr[i])-activePoliceNow;
                activePoliceNow=0;//all active police did their work
            }
            else
            {
                activePoliceNow +=arr[i];
            }
        }
    }
    cout<<untreated<<endl;

    return 0;
}