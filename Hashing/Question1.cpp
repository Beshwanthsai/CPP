// Given an integer array nums, return true if any value appears at least twice, otherwise return false.

// Input:  nums = [1,2,3,1]
// Output: true

// Input:  nums = [1,2,3,4]
// Output: false

#include<iostream>
#include<vector>
#include<unordered_set>

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
    unordered_set<int> seen;
    for(int i=0;i<n;i++)
    {
       if(seen.count(a[i]))
       {
            cout<<"true"<<endl;
            return 0;
       }
        seen.insert(a[i]);
    }
    cout<<"false"<<endl;
    return 0;


}