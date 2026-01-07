#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

char Firstrepeatingchhar(string s)
{
    unordered_map<char,int> mp;
    for(auto c:s)
    {
        mp[c]++;
    }
    for(auto c:s)
    {
        if(mp[c]>1)
        {
            return c;
        }
    }
    return '\0';
}

int main()
{
    string s;
    cin>>s;
    Firstrepeatingchhar(s);
    if(Firstrepeatingchhar(s)=='\0')
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<Firstrepeatingchhar(s)<<endl;
    }
}