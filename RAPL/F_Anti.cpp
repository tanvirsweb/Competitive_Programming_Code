#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
    #endif

    long long a,b,c,d,num=0;
    cin>>a>>b>>c>>d;

    for(int i=a;i<=b;i++)
    {
        if( (i%c !=0) && (i%d !=0) )
            num++;
    }
    cout<<num<<endl;

    return 0;
}

//evenly divisible (not comparable) (arithmetic) Leaving no remainder when divided by. 15 is evenly divisible by 3, but 16 isn't.

//Often it can mean both, which is fairly annoying sometimes. In mathematical contexts, you would say "between two numbers a and b, inclusive..." thus implying that a and b are included. It's not as common to see the complementary "between a and b, exclusive" though, which would indicate a and b are not included.