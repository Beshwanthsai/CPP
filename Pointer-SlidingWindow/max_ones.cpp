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
    // first window
    int k=3;
    int window_ones_count = 0;
    int maax=0;
    for(int i=0;i<k;i++){
        if(nums[i]==1){
            window_ones_count++;
        }
    }
    maax = window_ones_count;
    for(int r=k;r<n;r++){
        if(nums[r]==1){
            window_ones_count++;
        }
        if(nums[r-k]==1){
            window_ones_count--;
        }
        maax = max(maax,window_ones_count);
    }
    cout<<maax<<endl;
}