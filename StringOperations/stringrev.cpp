#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string rev="";
    int lengthh = s.length()-1;
    for(int i=lengthh;i>=0;i--)
    {
        rev+=s[i];
    }
    cout<<"reversed string: "<<rev;
}