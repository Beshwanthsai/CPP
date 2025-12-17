#include<iostream>
using namespace std;

int productofdigits(int n)
{
    if(n<10)
    {
        return n;
    }
    else{
        return (n%10)*productofdigits(n/10);
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<productofdigits(n)<<endl;
}