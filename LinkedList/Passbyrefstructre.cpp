#include<iostream>
using namespace std;

struct Node{
    int id;
    string name;
    float marks;
}s;

void updatemarks(Node &s)
{
    s.marks = s.marks + 10;

}

int main()
{
    cin>>s.id;
    cin>>s.name;
    cin>>s.marks;
    updatemarks(s);
    cout<<s.id<<endl;
    cout<<s.name<<endl;
    cout<<s.marks<<endl;
}   