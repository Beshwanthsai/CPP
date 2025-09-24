#include<iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cout << "Enter the size of the array: ";
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int smallest = a[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]<smallest)
            {
                smallest = a[i][j];
            }
        }
    }
    cout<<"Smallest element in the array is: "<<smallest;
    return 0;
}