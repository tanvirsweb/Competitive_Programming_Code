// https://www.hackerrank.com/contests/assignment-1-phitron-bootcamp/challenges/even-and-odd-8-1
#include<iostream>
using namespace std;

int main()
{
    long long n, val, sum_even=0, sum_odd=0;
    cin>>n;

    while(n--)
    {
        cin>>val;
        if(val%2==0)
        {
            sum_even+=val;
        }
        else 
        {
            sum_odd+=val;
        }
    }
    cout<<sum_even<<" "<<sum_odd<<"\n";
    
    return 0;
}