#include<iostream>
#include<string>
#include<sstream>


using namespace std;

int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;

    while(ss >> word)
    {
        for(int i=word.length()-1;i>=0;i--)
        {
            cout<<word[i];
        }
        cout<<" ";
    }
    return 0;
}