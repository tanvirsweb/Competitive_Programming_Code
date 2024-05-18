#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
    #endif

    int a,b,c,k,sum_max=0;
    cin>>a>>b>>c>>k;

    if(k<=a)
        sum_max=k;
    else if(k<=a+b)
        sum_max=a;
    else
        sum_max=a-(k-a-b);

    cout<<sum_max<<endl;

    return 0;
}