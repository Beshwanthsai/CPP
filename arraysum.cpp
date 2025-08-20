#include<iostream>
using namespace std;
int main()
{
    int n,esum=0,osum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            esum+=a[i];
        }
        else
        {
            osum+=a[i];
        }
    }
    cout<<"Even sum: "<<esum<<endl;
    cout<<"Odd sum: "<<osum<<endl;
}