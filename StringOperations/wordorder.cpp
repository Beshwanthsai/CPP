#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word,result="";
    while(ss>>word)
    {
        result+=word+" ";
    }
    if(result.length()>0)
    {
        result.pop_back();
    }
    cout<<result;
}