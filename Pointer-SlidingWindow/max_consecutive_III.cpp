#include<iostream>
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
    int k;
    cin>>k;
    int max_len=0;
    int left=0;
    int zero_count=0;
    for(int right=0;right<n;right++){
        if(nums[right]==0){
            zero_count++;
        }
        while(zero_count>k){
            if(nums[left]==0){
                zero_count--;
            }
            left++;
        }
        max_len=max(max_len,right-left+1);
    }
    cout<<max_len<<endl;
}