// https://www.hackerrank.com/contests/assignment-1-phitron-bootcamp/challenges/who-wins-2-2
#include<iostream>
using namespace std;

int main()
{
    long long n,x,y,p_won=0,t_won=0;
    cin>>n;
    
    while(n--)
    {
        cin>>x>>y;
        if(x>y)
        {
            t_won++;
        }
        else if(x<y)
        {
            p_won++;
        }
    }

    if(p_won>t_won)
    {
        cout<<"Pathan\n";
    }
    else if(p_won<t_won)
    {
        cout<<"Tiger\n";
    }
    else 
    {
        cout<<"Draw\n";
    }
    return 0;
}