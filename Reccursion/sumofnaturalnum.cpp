#include<iostream>
using namespace std;
int sumofnatnum(int n)
{
    if(n==0)
    return 0;
    else
    return n+sumofnatnum(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<sumofnatnum(n)<<endl;
}