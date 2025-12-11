#include<iostream>
#include<vector>
#include<algorithm>
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
    unordered_set<int> seen;
    vector<int>result;

    for(int x:a)
    {
        if(!seen.count(x))
        {
            seen.insert(x);
            result.push_back(x);
        }
    }

    cout<<"Array after removing duplicates: ";
    for(int x: result)
    {
        cout<<x<<" ";   
    }
   

}