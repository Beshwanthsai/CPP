#include<vector>
#include<algorithm>
#include<iostream>

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

    vector<int> temp = a;  
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(temp[i]%2!=0)
        {
            a[j++]=temp[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(temp[i]%2==0)
        {
            a[j++]=temp[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
