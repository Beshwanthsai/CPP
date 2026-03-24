#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    stack<int> st;
    vector<int> res;
    for(int i=0;i<n;i++){
        st.push(i);
    }
    if(st.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }
}