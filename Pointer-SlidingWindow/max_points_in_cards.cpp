// max points you can score from cards

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
    int lsum=0,rsum=0,max_sum=0;
    for(int i=0;i<k;i++)
    {
        lsum+=a[i];
        
    }
    max_sum=lsum;
    int rindex=n-1;
    for(int i=k-1;i>=0;i--)
    {
        lsum=lsum-a[i];
        rsum+=a[rindex];
        rindex--;
        max_sum=max(max_sum,lsum+rsum);}
    cout<<max_sum;
}