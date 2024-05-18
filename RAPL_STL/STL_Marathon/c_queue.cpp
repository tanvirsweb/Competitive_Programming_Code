//#include<bits/stdc++.h>
#include<iostream>
#include<queue>
#include<iterator>

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);

    int n,q,t,x,cs;
    cin>>n>>q;
    queue<int> qu[n];

    while(q--)
    {
        cin>>cs>>t;
        if(cs==0)
        {
            cin>>x;
            qu[t].push(x);
        }
        else if(cs==1)
        {
            if( !qu[t].empty() )
                cout<<qu[t].front()<<'\n';
        }
        else if(cs==2)
        {
            if( !qu[t].empty()  )
                qu[t].pop();
        }

    }
    return 0;
}