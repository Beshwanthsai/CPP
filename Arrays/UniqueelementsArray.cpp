#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5, 1, 2, 3};
    unordered_map<int, int> unique;
    for(int x : v1)
    {
        unique[x]++;
    }
    for(auto x : unique)
    {
        if(x.second == 1)
        {
            cout << x.first << " ";
        }
    }
}