#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<int,int> freq;
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    int n = arr.size(); 
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    for(auto it:freq)
    {
        cout<<it.first<<" "<<it.second<<"\n";   
    }
}
