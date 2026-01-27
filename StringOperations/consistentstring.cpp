#include<iostream>
#include<string>
#include<unordered_set>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    int count=0;
    vector<char> words;
    for(int i=0;i<n;i++)
    {
        cin>>words[i];
    }
    unordered_set<char> s(s.begin(),s.end());
    bool consistent=true;
    for(auto ch:words)
    {
        if(s.find(ch)==s.end())
        {
            consistent=false;
            break;
        }
    }
    if(consistent)
    count++;
    cout<<count<<endl;
    return 0;
}