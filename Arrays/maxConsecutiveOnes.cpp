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
    int count = 0;
    int max_count = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            count++;
            max_count = max(max_count,count);
        }
        else {
            count = 0;
        }
    }
    cout<<max_count;
}