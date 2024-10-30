// https://www.hackerrank.com/contests/assignment-2-phitron-bootcamp-a-b2/challenges/matrix-38
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    // m columns in last row
    for(int i=0;i<m;i++)
    {
        cout<<arr[n-1][i]<<" ";
    }
    cout<<"\n";

    // n rows in last column
    for(int i=0;i<n;i++)
    {
        cout<<arr[i][m-1]<<" ";
    }
    cout<<"\n";
    
    return 0;
}