#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string ss="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            ss+=s[i];
        }
    }
    cout<<ss<<endl;
    
    return 0;
}