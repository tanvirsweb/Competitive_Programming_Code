// https://www.hackerrank.com/contests/assignment-1-phitron-bootcamp/challenges/shopping-13
#include<iostream>
using namespace std;

int main()
{
    long long int x;
    cin>>x;

    if(x-1000>=500)
    {
        // after buying panjabi by 1000TK , now has 500TK or more?
        cout<<"I will buy Punjabi\n";
        cout<<"I will buy new shoes\n";
        cout<<"Alisa will buy new shoes\n";
    }
    else if(x-1000> 0)
    {
        // has more than 1000TK 
        cout<<"I will buy Punjabi\n";
    }
    else
    {
        cout<<"Bad luck!\n";
    }
    return 0;
}