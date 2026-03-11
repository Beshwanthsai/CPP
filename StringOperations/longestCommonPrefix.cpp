#include<iostream>
#include<vector>
#include<string>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    string prefix = a[0];
    for(int i=0;i<n;i++){
        while(a[i].find(prefix)!=0){
            prefix.pop_back();
        }
    }
    cout<<prefix<<endl;
}