#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int llu;
typedef long long int ll;

int main()
{
    freopen("input.txt","r",stdin);
    int n,m,q;
    cin>>n>>m;
    string s;
    map<string,int>mp;

    for(int i=0;i<n;i++)
    {
        cin>>s;
        mp[s]=0;
    }

    int maxAppear=0;
    for(int i=0;i<m;i++)
    {
        cin>>q;
        for(int i=0;i<q;i++)
        {
            cin>>s;
            //cout<<s<<endl;
            if(mp.find(s)!=mp.end())
            {
                mp[s]++;
                if(mp[s]>maxAppear)
                    maxAppear=mp[s];
            }

        }
    }

    cout<<maxAppear<<endl;
    for(map<string,int>::iterator it=mp.begin();it!=mp.end();it++)
    {
        if(it->second==maxAppear )
            cout<<it->first<<endl;
    }

    return 0;
}
