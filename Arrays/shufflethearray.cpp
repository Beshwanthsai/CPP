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
    vector<int> shuffled(2*n);
    shuffled.reserve(2*n);
    for(int i=0;i<n;i++)
    {
        shuffled[2*i]=a[i];
        shuffled[2*i+1]=a[i+n]; 
    }
    for(int i=0;i<2*n;i++)
    {
        cout<<shuffled[i]<<" ";
    }
    return 0;

}