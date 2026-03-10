#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin>>s;
    int count = 0;
    string res="";
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            if(count>0){
                res+=s[i];
            }
            count++;
        }
        else{
            count--;
            if(count>0){
                res+=s[i];
            }
        }
    }
    cout<<res<<endl;

}