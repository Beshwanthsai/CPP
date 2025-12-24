#include<iostream>

using namespace std;

int main()
{
    int n, target;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>target;
    bool found = false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            cout<<"element found at index" <<i<<endl;
            found = true;
            break;
        }
    }
    if(!found)
    {
        cout<<"element not found"<<endl;
    }
    return 0;
}