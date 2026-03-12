#include<iostream>
#include<string>

using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    int k = a.find(b);
    if(k!=string::npos){
        cout<<k<<endl;
    }
    cout<<-1<<endl;
}