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
    int k=4;
    int left=0,sum=0;
    int right=k-1;
    if(n < k) return 0;
    int i=0;
    while(i<right)
    {
        sum+=a[i];
        i++;
    }
    int max_sum=sum;
    while(right<n-1)
    {
        sum=sum-a[left];
        left++;
        right++;
        sum=sum+a[right];
        max_sum=max(max_sum,sum);
    }
    cout<<max_sum;

}