#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int k = 3;
    int left = 0;
    int sum = 0;
    int count=0;
    for(int right=0;right<n;right++){
        sum+=nums[right];
        while(sum>k){
            sum-=nums[left];
            left++;
        }
        if(sum==k){
            count++;
        }
    }
    cout<<count<<endl;

}