#include<iostream>

using namespace std;

struct Student{
    int id;
    string name;
    float marks;
};

int main()
{
    int n;
    cin>>n;
    Student students[n];
    for(int i=0;i<n;i++)
    {
        cin>>students[i].id;
        cin>>students[i].name;
        cin>>students[i].marks;
    }

    for(int i=0;i<n;i++)
    {
        cout<<students[i].id<<endl;
        cout<<students[i].name<<endl;
        cout<<students[i].marks<<endl;
    }

}