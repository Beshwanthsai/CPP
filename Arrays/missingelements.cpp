#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int main()
{
    int n;
    cin>>n;
    unordered_set<int> s;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int largest = arr[0];
    int smallest = arr[0];
    for(int i=1;i<n;i++)
    {
        largest = max(largest,arr[i]);
        smallest = min(smallest,arr[i]);
        s.insert(arr[i]);
    }
    vector<int> missing;
    for(int i=smallest;i<=largest;i++)
    {
        if(s.find(i)==s.end())
        {
            missing.push_back(i);
        }
    }
    cout<<"Missing elements are: ";
    for(int i=0;i<missing.size();i++)    {
        cout<<missing[i]<<" ";  
    }

}