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
    for(int i=0;i<n;i++)
    {
        int max_element = -1;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>max_element)
            {
                max_element = a[j];
            }
        }
        cout<<max_element<<" ";
    }
    
}