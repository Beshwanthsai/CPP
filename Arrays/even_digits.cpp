#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int even_count = 0;
    for(int i=0;i<n;i++)
    {
        int digit = 0;
        while (a[i]>0)
        {
            int rem = a[i]%10;
            a[i]= a[i]/10;
            digit++;
        }
        if(digit%2==0)
        {
            even_count++;
        }
    }
    cout<<even_count;
    return 0;

}