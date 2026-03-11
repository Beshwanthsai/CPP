#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin>>s;
    int count=0,max_count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            count++;
            max_count = max(count,max_count);
        }
        else if(s[i]==')'){
            count--;
        }
    }
    cout<<max_count<<endl;
}