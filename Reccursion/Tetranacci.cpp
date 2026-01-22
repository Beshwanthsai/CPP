#include<iostream>

using namespace std;

void tetranacci(int n)
{
    if(n==0){
        cout<<0<<endl;
    }
    if(n==1||n==2)
    {
        cout<<1<<endl;
    }
    if(n==3)
    {
        cout<<2<<endl;
    }
    int a=0,b=1,c=1,d=2,e=0;
    for(int i=4;i<=n;i++)
    {
        e=a+b+c+d;
        a=b;
        b=c;
        c=d;
        d=e;
    }

    cout<<e<<endl;
}

int main()
{
    int n;
    cin>>n;
    tetranacci(n);
    return 0;
}