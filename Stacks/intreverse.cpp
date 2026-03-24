#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    stack<int> st;
    // vector<int> res;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.push(x);
    }
    if(st.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
    }
    // for(int i=0;i<res.size();i++){
    //     cout<<res[i]<<endl;
    // }
}