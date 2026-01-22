#include<iostream>

using namespace std;

void tribonacci(int n)
{
    if(n==0)
    {
        cout<<0<<endl;
    }
    if(n==1||n==2)
    {
        cout<<1<<endl;
    }
    int a=0,b=1,c=1,d=0;
    for(int i=3;i<=n;i++)
    {
        d=a+b+c;
        a=b;
        b=c;
        c=d;
    }
    cout<<d<<endl;
}

int main()
{
    int n;
    cin>>n;
    tribonacci(n);
    return 0;
}