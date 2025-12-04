#include<iostream>
#include<unordered_set>

using namespace std;

int main()
{
    int n;
    cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
    unordered_set<int> s(a.begin(), a.end());
    cout<<s.size()<<endl;
}