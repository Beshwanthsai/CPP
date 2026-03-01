#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    long long window=0,max_sum=0;
    int k=3;
    for(int i=0;i<k;i++){
        window+=nums[i];
    }
    max_sum=window;
    for(int r=k;r<n;r++){
        window+=nums[r];
        window-=nums[r-k];
        max_sum = max(max_sum,window);
    }
    cout<<double(max_sum)/k<<endl;
}