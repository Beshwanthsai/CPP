#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>result(n);
    int l=0;
    int r=n-1;
    int i=n-1;

    while(l<=r)
    {
        if(abs(a[l])>abs(a[r]))
        {
            result[i] = a[l]*a[l];
            i--;
            l++;
        }
        else {
            result[i] = a[r]*a[r];
            i--;
            r--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }
}