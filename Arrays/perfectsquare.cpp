#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long sum=0;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    int left = 0, right = sum;
    while (left<=right)
    {
        long long mid = left+(right-left)/2;
        long long sq = mid*mid;
        if(sq == sum){
            cout<<"YEs"<<endl;
        }
        else if(sq<mid) left = mid+1;
        else right = mid - 1;
    }
    
}