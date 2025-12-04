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
   int largest = -1e9;
   int secondlargest = -1e9;
   for(int i=0;i<n;i++)
   {
    if(a[i]>largest)
    {
        secondlargest = largest;
        largest = a[i];
    }
    else if(a[i]>secondlargest && a[i]!=largest)
    {
        secondlargest = a[i];
    }
   }
    cout<<secondlargest<<endl;
}