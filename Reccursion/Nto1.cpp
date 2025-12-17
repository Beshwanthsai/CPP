#include<iostream>

using namespace std;

void printNto1(int n);

int main()
{
    int n;
    cin>>n;
    printNto1(n);
}

void printNto1(int n)
{
    if(n==0)
    {
        return;
    }
    else{
        cout<<n<<endl;
        printNto1(n-1);
    }
}