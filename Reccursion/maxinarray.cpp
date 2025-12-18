#include<iostream>
using namespace std;

void maxelearray(int arr[],int n, int &max)
{
    if(n==1)
    {
        max=arr[0];
        return;
    }
    else{
        if(arr[0]>max)
        {
            max=arr[0];
        }
        maxelearray(arr+1,n-1,max);
    }
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
    int max=arr[0];
    maxelearray(arr,n,max);
    cout<<max<<endl;    
}
