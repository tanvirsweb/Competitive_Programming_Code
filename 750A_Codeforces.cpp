#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int totalTime=240,n,tPartyToHouse,solvedNum=0,solveTime=0;
    cin>>n>>tPartyToHouse;

    for(int i=1;i<=n;i++)
    {
        solveTime+=i*5;
        if(solveTime<=240-tPartyToHouse)
            solvedNum++;
    }
    cout<<solvedNum<<endl;
    
    return 0;
}