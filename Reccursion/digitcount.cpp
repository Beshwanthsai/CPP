#include<iostream>

using namespace std;

int dc(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        return 1+dc(n/10);
    }
}
int main()
{
    int n;
    cin>>n;
    dc(n);
    cout<<dc(n)<<endl;
}