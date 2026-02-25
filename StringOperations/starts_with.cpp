#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s.size()>3 && s.substr(s.size()-3) == "ing")
    {
        s += "ly";
    }
    else if(s.size()>3)
    {
        s += "ing";
    }
    cout<<s<<endl;
    return 0;
   
}