#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int window = 0,max_sum=0;
    int k=3;
    for(int i=0;i<k;i++){
        window+=nums[i];
    }
    max_sum = window;
    for(int right = k;right<n;right++){
        window += nums[right] - nums[right - k];
        max_sum = max(window,max_sum);
    }
    cout<<max_sum<<endl;
}