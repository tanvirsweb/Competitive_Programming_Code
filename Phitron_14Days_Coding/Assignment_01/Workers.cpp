// https://www.hackerrank.com/contests/assignment-1-phitron-bootcamp/challenges/workers-1
#include<iostream>
#include <cmath> // for floor function
using namespace std;

int main()
{
    int M1, M2, D;
    cin>>M1>>M2>>D;

    // Calculate total work in worker-days
    int totalWork = M1 * D;

    // Calculate days required for M2 workers
    double daysNeeded = static_cast<double>(totalWork) / M2;
    
    // Output the integer part of the days needed
    cout<<static_cast<int>(floor(daysNeeded))<<"\n";
    
    return 0;
}