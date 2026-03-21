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
    long long root = sqrt(sum);
    if(root*root==sum){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}