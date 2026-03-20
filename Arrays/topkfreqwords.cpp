#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<string> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    unordered_map<string,int> freq;
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }

    vector<pair<string, int>> vec(freq.begin(),freq.end());

    sort(vec.begin(),vec.end(), [](auto &a,auto &b){
        if(a.second == b.second)
            return a.first < b.first;   // lexicographically smaller first
        return a.second > b.second;     // higher frequency first
    });

    vector<string> result;
    for(int i=0;i<k;i++){
        result.push_back(vec[i].first);
    }

    for(auto &word : result){
        cout << word << " ";
    }

    return 0;
}