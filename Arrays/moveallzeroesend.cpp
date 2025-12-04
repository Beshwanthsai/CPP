#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int idx = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[idx] = a[i];
            idx++;
        }
    }
    while(idx<n)
    {
        a[idx] = 0;
        idx++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}