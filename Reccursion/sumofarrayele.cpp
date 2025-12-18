#include<iostream>
using namespace std;
void sumofarray(int arr[],int n,int &sum)
{
    if(n==0)
    {
        return;
    }
    sum+=arr[0];
    sumofarray(arr+1,n-1,sum);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    sumofarray(arr,n,sum);
    cout<<sum<<endl;
}