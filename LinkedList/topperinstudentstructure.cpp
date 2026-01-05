#include<iostream>

using namespace std;

struct Student{
    int id;
    string name;
    float marks;
}s;

int topstudent(Student a[], int n)
{
    int max = a[0].marks;
    for(int i=0;i<n;i++)
    {
        if(a[i].marks>max)
        {
            max=a[i].marks;
        }
    }
    return max;
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
    int topper = topstudent(a,n);
    cout<<"Topper Marks: "<<topper<<endl;
    return 0;   
}