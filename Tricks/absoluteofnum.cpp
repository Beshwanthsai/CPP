#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sign = n >> 31;
    int absolute = (n^sign)-sign;
    cout<<"Absolute Value : " <<absolute<<endl;
}