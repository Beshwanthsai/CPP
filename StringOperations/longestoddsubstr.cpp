#include<iostream>
#include<string>

using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=s.length()-1;i>=0;i--){
        if((s[i]-'0')%2==1){
            cout<<s.substr(0,i+1)<<endl;
        }
    }
    cout<<-1<<endl;
}