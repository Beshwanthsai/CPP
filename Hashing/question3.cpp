// TWO_SUM

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int target;
    cin>>target;

    unordered_map<int,int> map; 
    for(int i=0;i<n;i++)
    {
        int diff=target-a[i];
        if(map.count(diff))
        {
            cout<<map[diff]<<" "<<i<<endl;
            return 0;
        }
        else
        {
            map[a[i]]=i;
        }
    }

}