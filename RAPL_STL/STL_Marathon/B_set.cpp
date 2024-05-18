//#include<bits/stdc++.h>
#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    set<int> s;
    int q,x,l,r,cs;
    cin>>q;

    while(q--)
    {
        cin>>cs;
        if(cs==0)
        {
            cin>>x;
            s.insert(x);
            cout<<s.size()<<'\n';//number of elements in set
        }
        else if(cs==1)
        {
            cin>>x;//x is present in set s?
            if(s.find(x)!=s.end())
                cout<<1<<'\n';
            else
                cout<<0<<'\n';
        }
        else if(cs==2)
        {
            cin>>x;
            s.erase(x);
        }
        else if(cs==3)
        {
            cin>>l>>r;
            auto il=s.lower_bound(l);
            auto ir=s.upper_bound(r);
            //lower_bound: returns->iterator to value
            //if passed value not present-->return iterator to-> immediate next element which is just greater than value
            //if there is no such element return end()

            //upper_bound: return iterator pointing in to the value in the set container which is larger to value(present/absent in set) passed in the parameter
            //if not present such value then return end()

            if(il!=s.end())//*s.end() ->produce RTE
                for(auto it=il;it!=ir;it++)
                    cout<<*it<<endl;

            /*
            for(auto it=s.begin();it!=s.end();it++)
            {
                //TLE
                if(l<=*it && *it<=r)
                    cout<<*it<<'\n';
            }*/

        }
    }

    return 0;
}