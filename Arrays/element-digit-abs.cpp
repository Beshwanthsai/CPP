#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    int digit = 0;
    int element = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        element+=a[i];
        while(a[i]>0)
        {
            digit+=a[i]%10;
            a[i]=a[i]/10;
        }
    }
    cout<<element-digit<<endl;
}