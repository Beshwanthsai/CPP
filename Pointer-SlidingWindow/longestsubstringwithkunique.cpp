#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<char> nums(n);
    for(int i=0;i<nums.size();i++){
        cin>>nums[i];
    }
    int left=0;
    int max_len=0;
    unordered_map<char,int> freq;
    for(int right=0;right<nums.size();right++){
        freq[nums[right]]++;
        while(freq.size()>2){
            freq[nums[left]]--;
            if(freq[nums[left]]==0){
                freq.erase(freq[nums[left]]);
                left++;
            }
        }
        if(freq.size()<=2){
            max_len = max(max_len,right-left+1);
        }
    }
    cout<<max_len<<endl;
    
}