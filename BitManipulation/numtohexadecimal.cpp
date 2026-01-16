#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string hexChars = "0123456789ABCDEF";
    string hexResult = "";
    if(n == 0)
    {
        hexResult = "0";
    }
    else
    {
        while(n>0)
        {
            int remainder = n % 16;
            hexResult = hexChars[remainder] + hexResult;
            n = n / 16;
        }
    }
    cout << hexResult << endl;
}