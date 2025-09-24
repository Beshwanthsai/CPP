//  program to check if a number is divisible by another number
#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if(n%m==0)
    {
        cout<<"Divisible";
    }
    else
    {
        cout<<"Not Divisible";
    }
}