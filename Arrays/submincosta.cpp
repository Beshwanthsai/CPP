#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    sort(nums.begin()+1,nums.end());

    for(int i=0;i<n;i++)
    {
        cout<<nums[0]+nums[1]+nums[2]<<endl;
    }
        
}