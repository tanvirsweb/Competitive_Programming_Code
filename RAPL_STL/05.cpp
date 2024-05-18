#include<bits/stdc++.h>
//use 1 header file instead of all other header file  "bits/stdc++.h"
//everything is defined inside it
using namespace std;

template<class T>
void printSet(set<T> st,string s="")
{
    if(s=="")
        cout<<"set size-> st.size(): "<<st.size()<<endl;
    else
        cout<<"set size->"<< s+".size(): "<<st.size()<<endl;
    cout<<"Elements of set are:\t";
    for(auto it=st.begin() ; it!=st.end() ; it++)
        cout<<*it<<" ";
    cout<<endl;
}

template<class T1>
void printSet(multiset<T1> mst,string s="")
{
    if(s=="")
        cout<<"\nmultiset size-> multisetObject.size(): "<<mst.size()<<endl;
    else
        cout<<"\nmultiset size(number of elements present in multiset)->"<<s+".size(): "<<mst.size()<<endl;
    
    cout<<"Elements of multiset "+s+" are:\t";
    for(auto it=mst.begin() ; it!=mst.end() ; it++)
        cout<<*it<<" ";
    cout<<"\n\n";
}

int main()
{
    //set-->1 element for 1 distinct value,and values are automatically sorted.
    //if element of same value is inserted >1 times only 1 copy of that value remains in set.

    freopen("in.txt","r",stdin);

    //set1={1,2,3,4,4}
    //set2={1,2,3,4}
    //here set1 and set2 are equal.
    set<string> st;
    st.insert("value");
    if( st.find("value")==st.end() )
        cout<<"value not in set\n";

    for(auto it=st.begin();it!=st.end();it++)
        cout<<*it<<endl;

    // st.erase(value)-->delete value_compare
    // st.erase(iterator)-->delete value indicated by the iterator
    // st.erase(it,it2)-->delete from iterator it(included) to it2(excluded)
    // st.clear()-->delete all
    
    //before deleting: it's a good practice to check if the value exist in set.Otherwise runtime error may occur.
    if(st.find("value")!=st.end())
    {
        cout<<"size of set before deletion:"<<st.size()<<endl;
        st.erase("value");
        cout<<"size of set after deletion:"<<st.size()<<endl;
    }

    st.erase("value_2");//no error,though value was not in set
    cout<<"\"value_2\" is not an element of set,but trying to erase() it...no error occured\n";
    
    cout<<"st.clear() ->>delete all elements in set"<<endl;
    //st.erase(); //05.cpp:69:14: error: no matching function for call to 'std::set<std::__cxx11::basic_string<char> >::erase()'
    st.clear();
    cout<<"set size:"<<st.size()<<endl;

    //1 2 3 4 6 8
    //delete 1 2 3
    //delete 1st 3 elements
    //vectorName.erase(vectorName.begin(),vectorName.begin()+3);
    
    //set do not support sequencial iterator.So st.begin()+3 would produce error
    //so use loop to delete first element each time

    //to keep duplicate elemnt in set--->use multiset
    //sorted
    //1,2,3,1,6,8
    //1,1,2,3,4,6,8

    //multisetObj.erase(value)-->>delete all occurance of "value"
    //to delete only one occurance of value: pass iterator in multiset
    multiset<string>mst;
    mst.insert("value_1");
    mst.insert("value_2");
    mst.insert("value_1");

    // printSet<string>(mst,"mst");  -->as template is used if there is problem type ambiguity-->we can specify type by templateFunctionName<type>(arguments)
    printSet(mst,"mst");
    mst.erase("value_1");
    cout<<"after mst.erase(\"value_1\") -->all occurance of value_1 is deleted from multiset"<<endl;
    printSet(mst);//as 2nd argument is default argument.If we don't pass string the function will still run and value of 2nd argument will be default value set in function

    mst.insert("value_3");
    mst.insert("value_4");
    mst.insert("value_3");

    printSet(mst,"mst");
    mst.erase( mst.find("value_3") );//pass iterator to value_1
    cout<<"after mst.erase( mst.find(\"value_3\") ) -> 1st occurance of value_3  is deleted from multiset"<<endl;
    printSet(mst);

    mst.erase(mst.begin());
    cout<<"after deleting 1st value(smallest value stays on 1st) of multiset--> mst.erase(mst.begin()):"<<endl;
    printSet(mst);

    set<int>sti;
    for(int i=10;i>=-2;i--)
        sti.insert(i);
    printSet(sti,"sti");

    cout<<"sti.erase( sti.find(2),sti.find(7) ):delete all elements between 2(included) to 7(excluded) in multiset"<<endl;
    if(sti.find(2) != sti.end()  && sti.find(7) != sti.end() )//check if 2 and 7 are inside set->otherwise find() will return sti.end()-->error would occur if this sti.end() iterator is passed to erase() function
        sti.erase(sti.find(2),sti.find(7) );
    printSet(sti);
    
    sti.erase(1000);
    cout<<"sti.erase(1000) -->won't produce Runtime error-->though 1000 is not an element of the set -->as value is passed not iterator"<<endl;

//if a value passed to erase(value) from set->whether the value is in set/not in set-->error won't occur
//if an iterator is passed to erase(iterator_name)->if the iterator points to any element of set->that element will be deleted.
//but if it's not a valid iterator -->Runtime error would occur

    // sti.erase(sti.end());
    //error will occur-->sti.end() ->don't point to any element in set.It's iterator to end of set

    multimap<string,int>mp;//elements will be sorted acording to key value
    //a a b
    //4 3 7
    //same key a-->different value 3 and 4
    //data are not sorted acording to value.Can't determine 3/4 which will come first.
    
    // mp["a"]=3; -->error
    // mp["a"]=4;
    //cout<<mp["a"]<<mp["a"]<<endl;
    //can't access value by [] in multimap though we can do it in map
    
    for(int i=0;i<5;i++)
    {
        string name;
        int number;
        cin>>name>>number;
        mp.insert( {name,number} );
        //or, 
        mp.insert(make_pair(name,number));
    }

    for(auto it=mp.begin() ; it!= mp.end() ; it++ )
    {
        cout<<it->first<<"\t"<<it->second<<endl;
    }

//use insert for map
    return 0;
}