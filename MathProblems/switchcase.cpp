#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    switch(n%2)
    {
        case 0:
        {
            cout<<"Even"<<endl;
            break;
        }
    }
    cout<<"Odd"<<endl;
    return 0;
}