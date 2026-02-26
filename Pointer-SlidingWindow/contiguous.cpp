#include<iostream>
#include<vector> 
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<nums.size();i++)
    {
        cin>>nums[i];
    }
    int max_sum=0;
    for(int i=0;i<nums.size();i++){
        int sum=0;
        for(int j=i;j<nums.size();j++){
            sum+=nums[j];
            max_sum = max(max_sum,sum);
        }
    }
    cout<<max_sum<<endl;
}