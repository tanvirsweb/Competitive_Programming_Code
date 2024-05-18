//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;

int main()
{
        
    //freopen("in.txt","r",stdin);

    int n,q;
    cin>>n>>q;//input array number and query number
    vector<int>v[n];
    
    

    //q queries
    while(q--)
    {
        int d,t,x;
        cin>>d>>t;//input d,t,x or d,t depending on value of d=0 or 1,2

        if(d==0)
        {
            cin>>x;
            v[t].push_back(x);
        }
        else if(d==1)//dump
        {
            /*
            int l=v[t].size();
            for(int i=0;i<l;i++)//if(i==(int)v[t].size()-1)  -->produce TLE as for each iteration type casting is needed
            {
                if(i==l-1)
                    cout<<v[t][i];
                else
                    cout<<v[t][i]<<' ';
            }
            cout<<'\n';
            
            or,
            */
            
            int s=v[t].size();
            if(s!=0)
            {
                for(int i=0;i<s-1;i++)
                {
                    cout<<v[t][i]<<" ";
                }
                
                cout<<v[t][s-1]<<endl;
            }
            else
                cout<<endl;//vector[t] is empty so print blank line
        }
        else if(d==2)//clear
        {
            if(v[t].size()!=0)//( !( v[t].empty() ) ) 
                v[t].clear();
        }
    }

    return 0;
}