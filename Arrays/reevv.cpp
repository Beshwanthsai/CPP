#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main()
{
    int arr[] = {16, 4, 3, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_map<int ,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(auto it : m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}