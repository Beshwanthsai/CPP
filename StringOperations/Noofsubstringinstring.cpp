#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string sub;
    int count =0;
    cin>>sub;
    int n = s.length();
    int m = sub.length();
    for(int i=0;i<=n-m;i++)
    {
        if(s.substr(i,m) == sub)
        {   
            count++;
        }
    }
    cout<<count;
    
    
}