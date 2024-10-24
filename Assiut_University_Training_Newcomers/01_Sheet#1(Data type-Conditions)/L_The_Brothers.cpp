// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string first_name_1, second_name_1, first_name_2, second_name_2;
    
    cin>>first_name_1>>second_name_1>>first_name_2>>second_name_2;
    
    if(second_name_1==second_name_2)
    {
        cout<<"ARE Brothers\n";
    }
    else
    {
        cout<<"NOT\n";
    }

    return 0;
}