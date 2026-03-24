#include<iostream>
#include<stack>

using namespace std;

int main(){
    string s="Beshwanth";
    string res="";
    stack<char> st;
    for(int i=0;i<s.length();i++){
        st.push(s[i]);
    }
    if(st.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        while (!st.empty())
        {
           res+=st.top();
           st.pop();
        }
    }
    cout<<res;
}