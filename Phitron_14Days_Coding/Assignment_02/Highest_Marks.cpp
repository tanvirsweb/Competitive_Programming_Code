// https: // www.hackerrank.com/contests/assignment-2-phitron-bootcamp-a-b2/challenges/highest-marks-1
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    cin>>arr[0];
    int max_ = arr[0];

    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>max_)
        {
            max_ = arr[i];
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<< abs(arr[i]-max_) <<" ";
    }
    cout<<"\n";

    return 0;
}
