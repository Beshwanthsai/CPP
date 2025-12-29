// Given an integer array nums, return true if any value appears at least twice, otherwise return false.

// Input:  nums = [1,2,3,1]
// Output: true

// Input:  nums = [1,2,3,4]
// Output: false

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
        if(mp[a[i]]>1)
        {
            cout<<"true"<<endl;
            return 0;
        }
    }
    cout<<"false"<<endl;
    return 0;


}