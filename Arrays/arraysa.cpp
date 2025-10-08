#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n],sum=0;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
        int avg = sum/n;
        cout<<"Sum of array is: "<<sum<<"\n";
        cout<<"Average of array is: "<<avg<<"\n";
    }

}