#include<iostream>
#include<stack>

using namespace std;

int main(){
    string s;
    cin>>s;
    int count = 0;
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{'||s[i]=='['){
            st.push(s[i]);
        }
        if(st.empty()) cout<<"false"<<endl;
        char top = st.top();
        if(s[i]==')' && top=='(' || s[i]=='}'&& top=='{'||s[i]==']'&& top=='['){
            st.pop();
        }
        else cout<<"False"<<endl;
    }
    if(st.empty()) cout<<"True"<<endl;
}