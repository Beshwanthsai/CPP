#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    int k=n;
    while(n>0)
    {
        n=n/4;
        count++;
    }
    int l = pow(4,count);
    if(l==k)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}