#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    unordered_set<int> s;
    for(int a:nums){  // 1 2 3 4 5 1 2 3
        s.insert(a);
    }
    for(int a:s)
    {
        cout<<a<<endl;
    }
    
    
}