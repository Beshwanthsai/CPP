#include<iostream>
#include<vector>
#include<unordered_set>

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
    unordered_set<int> set;
    for(int i=0;i<=n;i++)
    {
        set.insert(i);
    }
    for(int i=0;i<n;i++)
    {
        if(set.count(i)==0)
        {
            return i;
        }
    }
    cout<<"0"<<endl;
    return 0;
    

}