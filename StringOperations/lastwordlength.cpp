#include<iostream>
#include<string>
#include<sstream>

using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int lastWordLength = 0;
    stringstream ss(s);
    string word;
    while(ss>>word)
    {
        lastWordLength = word.length();
    }
    cout << lastWordLength << "\n";
}