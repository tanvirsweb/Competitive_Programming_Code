#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    //((()()))
    stack<char> st;

    string a="abc",s,b="cba";//similar to character vector
    s=a+b;//in string(similar to vector of characters-->null not present inside it) use + -->instead of ->concat() function which is used for char array(null terminated string)
    cout<<s<<endl;

    s.push_back('z');//insert a character at the end of string s.
    cout<<s<<endl;
    
    //in STL we can keep one container inside another

    vector<string> vs;
    vs.push_back("string1");
    vs.push_back("string2");
    cout<< vs[0]+" "+vs[1]<<endl;

    //default value of string="" -->empty string
    //default value of char array-->NULL '\0'
    return 0;
}