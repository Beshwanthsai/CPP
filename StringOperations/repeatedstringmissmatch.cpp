#include<iostream>
#include<string>

using namespace std;
int main(){
    string s,b;
    cin>>s>>b;

    string temp = s;
    int count=1;
    while (temp.length()<b.length())
    {
        temp+=s;
        count++;
    }
    if(temp.find(b)!=string::npos){
        return count;
    }
    temp+=s;
    count++;
    if(temp.find(b)!=string::npos){
        return count;
    }
    cout<<-1<<endl;

}