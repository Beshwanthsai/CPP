#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    for(auto x:a)
    {
        freq[x]++;
        if(freq[x]>k)
        {
            cout<<x<<" ";
        }
    }
    

}