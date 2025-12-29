// Given an integer array nums, find the first element that appears exactly once.
// If no such element exists, print -1.

// Input:  nums = [4, 5, 1, 2, 0, 4]
// Output: 5

// Input:  nums = [1, 1, 2, 2]
// Output: -1


#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    unordered_map<int,int> map;

    for(int x:a)
    {
        map[x]++;
    }
    for(int x:a)
    {
        if(map[x]==1)
        {
            cout<<x<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}