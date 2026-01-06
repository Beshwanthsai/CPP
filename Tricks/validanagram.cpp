#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t && s.length()==t.length())
    {
        cout<<"Anagram"<<endl;
    }
    else
    {
        cout<<"Not Anagram"<<endl;
    }
    return 0;
}