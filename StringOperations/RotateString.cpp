#include<iostream>
#include<string>

using namespace std;
int main(){
    string s;
    string goal;
    cin>>s>>goal;
    int n= s.length();
    for(int i=0;i<n;i++){
        int k= i%n;
        if(s.substr(k)+s.substr(0,k)==goal){
            cout<<"Ture"<<endl;
        }
        else{
            cout<<"False"<<endl;
        }
    }
}