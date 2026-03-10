#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums={1,2,3,4,5};
    int k = 3;
    int left = 0;
    int sum = 0;
    for(int right = 0;right<nums.size();right++){
        sum+=nums[right];
        while (sum>k)
        {
            sum-=nums[left];
            left++;
        }
        if(sum==k){
            for(int i=left;i<=right;i++){
                cout<<nums[i]<< " ";
            }
            cout<<endl;
        }
        
    }
}