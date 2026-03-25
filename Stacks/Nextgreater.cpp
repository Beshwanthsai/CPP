#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    stack<int> st;
    // int ans = -1;
    for(int i=n-1;i>=0;i--){
        while (!st.empty() && st.top()<=a[i])
        {
            st.pop();
        }
        if(st.empty()) a[i]=-1;
        else a[i] = st.top();

        st.push(a[i]);
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<endl;
}
