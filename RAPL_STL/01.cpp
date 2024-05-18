#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    vector<int> v;//specify data type inside "<> angle bracket" after it specify name of the vector object
    int x;
    for(int i=0;i<5;i++)
    {
        cin>>x;
        v.push_back(x);//insert x at the end/back of vecotr v;
    }
    //v.pop_back();//delete last element of vector v;

    //size() always return -->unsigned int(non negative)
    //length() is for string not vector

    //if v.size()=0 then 
    // index = v.size()-1= a large gurbage(value before last value) +ve number -->not -1.
    //As it's unsigned int.So runtime error may occur as index may be out of bound
    //int n=v.size();
    //if n=v.size()=0 then n-1=-1

    int n=v.size();
    //size() returns unsigened int(non negative)--> so-> if object.size()=0 then 
    //( object.size()-1 )is not: -1 it will be -->a large number -->out of bound error would occur
    //to avoid this problem typecast to--> int/ store size() inside an int(-ve,0,+ve-->value without fraction) variable
    for(int i=0;i<n-1;i++)
    {
        if(v[i]==v[i+1])
            cout<<"2 serial number are equal\n";
        else
            cout<<"NO\n";
    }

    vector<int> p;
    p=v;//direct copy v vector to p vector
    
    if(v.size()!=0)
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<endl;
    
    int SizeOfVector=5;
    vector<int> vec(SizeOfVector);
    cout<<"vector size:"<<vec.size()<<endl;//5

    //array size specified by [] bracket
    //vector size specified by () bracket
    //declare a vector of size SizeOfVector whose all elements are assigned 0.
    //vec[0]=vec[1]=...=vec[SizeOfVector-1]=0
    vec.push_back(100);//push 100 at the end of vector.Here its index is SizeOfVector
    cout<<"vector size:"<<vec.size()<<endl;//6 -->5(told size)+1(number of new inserted element)
    cout<<"vec[6-1]:"<<vec[SizeOfVector]<<endl;//100
    cout<<"vec[0]:"<<vec[0]<<endl;//0

    for(int i=0;i<SizeOfVector;i++)
        cin>>vec[i];

    //push_back(value) --->insert value at the end of vector
    //pop_back()--->delete last(end) element of vector
    //size()-->number of elments now in vector

//to run a loop: 10 to the power 8 times-->need 1 second


//vector--> insert &  deletion -->only at back
//deque-->same as vector -->insertion & deletion -->from both front and back
//push_front(value),push_back(value),pop_front(),pop_back().

    return 0;
}