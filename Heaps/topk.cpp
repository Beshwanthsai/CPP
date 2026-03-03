#include<iostream>
#include<queue>
#include<vector>
#include<unordered_map>

using namespace std;

int main(){
    int n,k=2;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_map<int,int> freq;
    for(int nums:a){
        freq[nums]++;
    }
    priority_queue<pair<int,int>,
                   vector<pair<int,int>>,
                   greater<pair<int,int>>> p;

    for(auto it:freq){
        p.push({it.second,it.first});
        
        if(p.size()>k){
            p.pop();
        }
    }
    cout<<"Top "<<k<<" frequent elements are: "<<endl;
    while(!p.empty()){
        cout<<p.top().second<<endl;
        p.pop();
    }
}