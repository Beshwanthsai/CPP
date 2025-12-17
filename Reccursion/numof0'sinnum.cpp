#include<iostream>
using namespace std;

int numof0s(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        int count=0;
        if(n%10==0)
        return 1+numof0s(n/10);
        else
        return numof0s(n/10);
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<numof0s(n)<<endl;
}