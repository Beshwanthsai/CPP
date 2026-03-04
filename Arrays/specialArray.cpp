#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    bool yeah = true;
    for(int i=1;i<nums.size();i++){
        if((nums[i]%2)==(nums[i-1]%2)){
            yeah = false;
        } 
    }
    cout<<yeah<<endl
}