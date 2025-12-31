// this problem tells that to count the elemets that occur only once in an array.
// leetcode 1748 : Sum of Unique Elements

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
            cin>>a[i];
    }
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++)
    {
        freq[a[i]]++;
    }
    int sum=0;
    for(auto it:freq)
    {
        if(it.second==1)
        {
            sum+=it.first;
        }
    }
    cout<<sum;
    return 0;
    
}