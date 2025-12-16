#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n&1)
    {
        cout<<"odd"<<endl;
    }
    else{
        cout<<"even"<<endl;
    }
}


// here we are checking the lsb of the given number and if it was 1 1&1 = 1 so this is odd, 
// if the number is odd the lsb will always be 1 and if the number is even the lsb will always be 0 so 0&1 = 0
// so this is even.