#include<iostream>

using namespace std;

struct Student{
    int id;
    string name;
    float marks;
}s;

void arrayofstructures(Student a[], int n)
{
    for(int i=0;i<n;i++)
    {
        a[i].marks = a[i].marks + 10;
    }
}

int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].id;
        cin>>a[i].name;
        cin>>a[i].marks;
    }
    arrayofstructures(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i].id<<endl;
        cout<<a[i].name<<endl;
        cout<<a[i].marks<<endl;
    }

}