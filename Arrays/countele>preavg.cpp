#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    double preavg=(double)sum/n;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if((double)arr[i]>preavg)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}