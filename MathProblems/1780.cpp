#include<iostream>

using namespace std;

bool issumpow3(int n)
{
    while(n>0)
    {
        if(n%3==2) return false;
        n/=3;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    if(issumpow3(n))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}