#include<bits/stdc++.h>
using namespace std;
int primes[1000001];
bool notPrime[1000001];

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
//----------------------

bool GCD_is_n(int n,int k)
{
    if(k%n==0)
        return true;
    else 
        return false;
}
int SOD(int n)
{
    int sum=0;
    set<int> s;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            s.insert(i);
            s.insert(n/i);
        }
    }
    for(set<int>::iterator it=s.begin();it!=s.end();it++)
    {
        sum+= (*it);
    }
    return sum;
}

F(int n,int k,int x)
{
   int numPd=0;
   //set<int> pd;
   int large_pd_index=-1;
   for(int i=n;primes[i]>=2;i--)
   {
        if(n%primes[i]==0)
        {
            large_pd_index=i;
            break;
        }

   } 
   int sod=SOD(n);
   if( ( GCD_is_n(n,k) || (sod-1)==n || sod>=x )&& large_pd_index!=-1)
   {
        return primes[large_pd_index];
   }
   else
   {
        return -n;
   }

}

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

int main()
{
    sieve(1000001);
    for(int i=2,j=0;i<1000001;i++)
    {
        if(notPrime[i]==false)
        {
            primes[j++]=i;
        }
    }
    //freopen("input.txt","r",stdin);
    long long int l,r,k,x,q,preMaxF,maxF,maxF_a,a;
    cin>>q;
    while(q--)
    {
        cin>>l>>r>>k>>x;

        maxF=F(l,k,x);
        preMaxF=maxF;

        for(int i=l+1;i<=r;i++)
        {
            a=F(i,k,x);
            if(a>maxF)
            {
                preMaxF=maxF;
                maxF=a;
                maxF_a=i;
            }

        }
        if(maxF>preMaxF)
        {
            cout<<maxF_a<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }

    }
    return 0;
}