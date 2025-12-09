#include<iostream>
#include<unordered_set>
#include<vector>

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
    unordered_set<int> de;
    for(int i=0;i<n;i++)
    {
        de.insert(a[i]);
    }
    cout<<de.size()<<endl;
    return 0;

}