#include<iostream>
#inlcude<string>

using namespace std;

int main()
{
    string s="Madam";
    string rev = s;
    reverse(rev.begin(),rev.end());
    if(s==rev)
    {
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a plaindrome"<<endl;
    }
}