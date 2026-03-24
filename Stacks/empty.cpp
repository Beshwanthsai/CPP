#include<iostream>
#include<stack>

using namespace std;


int main(){
    stack<int> st;
    for(int i=0;i<6;i++){
        st.push(i);
    }
    if(st.empty()){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
}