#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int left = 0, right = n-1;
    while(left <= right)
    {
        int mid = (left+right)/2;
        if(target == arr[mid])
        {
            cout<<"element found at index :"<<mid<<endl;
            return 0;
        }
        else if(target < arr[mid])
        {
            right = mid -1;
        }
        else if(target > arr[mid]){
            left = mid +1;
        }
    }
    cout<<"element not found"<<endl;
    return 0;
}