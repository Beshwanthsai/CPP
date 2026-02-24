// Longest Substring Without Repeating Characters
#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int max_len=0;
    for(int i=0;i<s.size();i++){
        int hash[256]={0};
        for(int j=i;j<s.size();j++)
        {
            if(hash[s[j]]==0)
            {
                hash[s[j]]=1;
                max_len=max(max_len,j-i+1);
            }
            else
            {
                break;
            }
        }
    }
    cout<<max_len;

}