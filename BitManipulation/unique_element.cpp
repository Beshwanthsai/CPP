#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int result = 0;
    for(int i=0;i<n;i++)
    {
        result = result ^ a[i]; 
    }
    cout<<"The unique element is: "<<result<<endl;
    return 0;

}