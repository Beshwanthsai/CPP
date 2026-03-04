#include<iostream>
#include<vector>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<nums.size();i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    int current = 1;
    int longest = 1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==nums[i-1]){
            continue;
        }
        if(nums[i]==nums[i-1]+1){
            current++;
        }
        else{
            longest = max(longest,current);
            current = 1;
        }
        if(nums.size()==0) cout<<0<<endl;
        cout<<max(longest,current)<<endl; 
    }
}