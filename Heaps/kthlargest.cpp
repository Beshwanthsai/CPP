#include<iostream>
#include<queue>
#include<vector>

using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k=2;
    priority_queue<int,vector<int>, greater<int>> p;
    for(int nums:a){
        p.push(nums);

        if(p.size()>k){
            p.pop();
        }
    }
    cout<<p.top()<<endl;
}