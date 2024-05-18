#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("intput.txt","r",stdin);
    int q,num;
    cin>>q;
    while(q--)
    {
        cin>>num;
        if(num%19==0)
            cout<<"Lucky"<<endl;
        else
            cout<<"Unlucky"<<endl;
    }
    return 0;
}