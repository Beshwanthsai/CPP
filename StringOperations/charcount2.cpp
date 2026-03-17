#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int addre=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a'||s[i]=='A')
        {
            addre++;
        }
    }
    cout<<addre<<endl;
    return 0;
}
