#include<iostream>
using namespace std;

struct Student{
    int id;
    string name;
    float marks;
}s;

int main()
{
    cin>>s.id;
    cin>>s.name;
    cin>>s.marks;

    cout<<s.id<<endl;
    cout<<s.name<<endl;
    cout<<s.marks<<endl;
}