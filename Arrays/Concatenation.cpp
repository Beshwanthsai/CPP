#include<iostream>
#include<vector>
using namespace std;



int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
{
        cin>>a[i];
}   
    vector<int> ans(2*n);
    for(int i=0;i<n;i++)
    {
        ans[i]=a[i];
        ans[i+n]=a[i];
    }
    for(int i=0;i<2*n;i++)
    {
        cout<<ans[i]<<" ";
    }
}