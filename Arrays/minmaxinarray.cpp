#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<"enter the size of array: ";
    int a[n];
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[0],min=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<"Maximum element in array is: "<<max<<"\n";
    cout<<"Minimum element in array is: "<<min<<"\n";
}