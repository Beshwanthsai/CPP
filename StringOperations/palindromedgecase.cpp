#include<iostream>
#include<string>    
using namespace std;

int main()
{
    string s;
    cin>>s;
    string ss = s;
    int left = 0, right = s.length() - 1;
    while(left<right)
    {
        while(left<right && !isalnum(s[left])) left++;
        while(left<right && !isalnum(s[right])) right--;
        swap(s[left], s[right]);
        left++; right--;
    }
    if(s==ss)
    {
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a Palindrome"<<endl;
    }
}