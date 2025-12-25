#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        a[i]=sum;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}