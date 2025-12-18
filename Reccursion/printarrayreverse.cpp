#include<iostream>
#include<vector>

using namespace std;

void revprintarray(int arr[],int n)
{
    if(n==0)
    {
        return;
    }

        revprintarray(arr+1,n-1);
        cout<<arr[0]<<endl;
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
 
    }
    revprintarray(a.data(),n);
}