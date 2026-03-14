#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;


vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(int i=0;i<strs.size();i++){
            string a = strs[i];
            sort(a.begin(),a.end());
            m[a].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto &x:m){
            res.push_back(x.second);
        }
}


int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> res = groupAnagrams(strs);

    for(auto group : res) {
        for(string word : group)
            cout << word<<endl;
        cout << endl;
    }
}