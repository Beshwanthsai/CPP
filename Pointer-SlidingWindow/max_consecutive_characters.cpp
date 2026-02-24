#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int max_len=1;
    int res=1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            max_len++;
        }
        else{
            max_len=1;
        }
        res=max(res,max_len);
    }
    cout<<res;
}