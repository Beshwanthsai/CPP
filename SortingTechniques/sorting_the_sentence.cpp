#include<iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    vector<string> a(10);
    while(ss>>word)
    {
        int ids =word.back()-'0';
        word.pop_back();
        a[ids] = word;
    }

    string result;
    for(int i=0;i<10;i++)
    {
        if(!a[i].empty())
        {
            result+=a[i]+" ";
        }
    }
    cout<<result<<endl;
}