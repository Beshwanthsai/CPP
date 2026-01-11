#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    unordered_map<char,int> freq;
    int distinctCount = 0;
    for(int i=0;i<s.length();i++)
    {
        freq[s[i]]++;
        if(freq[s[i]]==1)
        {
            distinctCount++;
        }
    }
    cout<<distinctCount<<"\n";

}