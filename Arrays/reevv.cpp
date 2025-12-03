#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cout<<"enter number of array elements u want: ";
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    reverse(a.begin(), a.end());
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}