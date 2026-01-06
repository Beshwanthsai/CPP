// #this is leetcode problem number first-letter-to-appear-twice


#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
    string s;
    cin>>s;
    unordered_set<char> seen;
    for(char c:s)
    {
        if(seen.count(c))
        {
            cout<<c<<endl;
            break;
        }
        else
        {
            seen.insert(c);
        }
    }
    return 0;
}