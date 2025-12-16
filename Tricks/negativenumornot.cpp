#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sign = n >> 31;
    if(sign)
        cout<<"Negative"<<endl;
    else
        cout<<"Positive"<<endl;


}