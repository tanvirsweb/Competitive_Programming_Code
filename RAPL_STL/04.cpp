#include<bits/stdc++.h>
using namespace std;

int main()
{
    // default value:
    // int=0
    // string=""
    map<string,string>mp;
    //in map values are sorted acording to it's key value(ascending for numbers and Lexicographically oredered for string).
    mp["country"]="capital";
    
    if(mp["country_a"]!="")
    {
        cout<<mp["country_a"]<<endl;
        //using [] is not a good practice As if "country_a" is absent an index for "country_a" will be created(extra use of memory)-->then it's value will be set as ""
    }
    //or cout<<mp.at("country")<<endl;//print value for key:"country"
    //but at(key)-->returns the value associted with the key
    //if such key is not in map--> that key won't be created and memory won't be wasted but--> for using at() runtime error would occur
    
//     cout<<mp.at("Alvi Siddique")<<endl;//as this key is not in map-->RTE occured
//     terminate called after throwing an instance of 'std::out_of_range'
//     what():  map::at

    


    if(mp["cnt"]!="")// not a good practice As if "cnt" is absent an index for "cnt" will be created(extra use of memory)
        cout<<mp["cnt"]<<endl;
    // best practice use find()-->return iterator to the key

    // iterator don't determine any physical address-->but work like pointer
    // *iteratorName= valuePointedByIterator
    if( mp.find("country")==mp.end() )
        cout<<"country is not in map mp(not took as input)\n";
    cout<<"map size: "<<mp.size()<<endl;


//map<string,string>::iterator it; or,

    auto x=5;//x is automatically int
    auto x2=3.5;//x2 is float
    auto x3="stirng_value";//x is automatically string
    //auto x4; -->error.Initialization must for auto type variable to determine actual type of the variable

    //iterator-->functions: it-- ,it++ ,*it , it == ,it !=
    //<,> .... operator isn't supported by iterator
    //it < mp.end() would cause error

    for(auto it=mp.begin();it!=mp.end();it++)
    {
        pair<string,string> p=*it;
        cout<<p.first<<"\t"<<p.second<<endl;
        //or,
        cout<<(*it).first<<"\t"<<(*it).second<<endl;
        //cout<<it->first<<" \t"<<it->second<<endl;
    }
//map-->made using red black tree.
    return 0;

    //for using STL you should be concerned about empty(),begin(),size()...etc
}