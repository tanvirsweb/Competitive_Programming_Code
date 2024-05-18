#include<bits/stdc++.h>
using namespace std;

int main()
{
   //freopen("input.txt","r",stdin);
    int r,p,x,q=11;
    cin>>r;
    while(q--)
    {
        cin>>p>>x;
        if(p==0 || p>=10)
            cout<<"No"<<endl;
        else 
        {
            if(x/p <r)//( ( (x%p)==0 && (x/p)<r) || ( (x%p)!=0 && (x/p+1)<r ) ) 
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}