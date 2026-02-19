#include<iostream>
#include<algorithm>
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
    sort(a.begin(),a.end());
        if(n%2!=0)
        {
            cout<<a[n/2];
        }
        else{
            int median = a[n/2]+a[n/2-1];
            cout<<median/2;
        }
    
}