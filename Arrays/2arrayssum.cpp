#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<m;j++)
    {
        cin>>b[j];
    }
    int sum[n];
    for(int i=0;i<n;i++)
    {
            sum[i]=a[i]+b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << sum[i] << " ";
    }
    


}