#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int llu;
typedef long long int ll;
bool notPrime[1000000];

bool is_prime(int n)
{
    if(n==2)
        return true;
    else if(n<2)
        return false;
    else if(n%2==0)
        return false;
    for(int i=3;i<=n/2;i=i+2)
    {
        if(n%i==0)
            return false;
    }

    return true;
}

void sieve(int n)
{
    for(int i=2;i*i<=n;i++)//index i points number=i;by not using index 0.
    {
        if( notPrime[i] == false )//i is a prime
        {
            for(int j=i*i; j<=n; j=j+i)
            {
                notPrime[j]=true;//all multiplication of i is non-prime
            }
        }
    }
}

int main()
{
    
    freopen("primes.txt","w",stdout);
    int n=1000;
    sieve(n);
    for(int i=2;i<n;i++)
    {
        if(notPrime[i]==false)
            cout<<i<<" ,";
    }
 
    /* for(int i=2;i<5000;i++)
    {
        if(is_prime(i))
            cout<<i<<",";
    } */

    return 0;
}
