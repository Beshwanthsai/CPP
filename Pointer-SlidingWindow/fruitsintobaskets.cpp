#include<iostream>
#include<vector>
#include<unordered_map>


using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int left=0,max_len=0;
    unordered_map<int,int> freq;
    for(int right=0;right<nums.size();right++){
        freq[nums[right]]++;
        while(freq.size()>2){
            freq[nums[left]]--;
            if(freq[nums[left]]==0){
                freq.erase(nums[left]);
            }
            left++;
        }
        max_len = max(max_len,right-left+1);
    }
    cout<<max_len<<endl;
}