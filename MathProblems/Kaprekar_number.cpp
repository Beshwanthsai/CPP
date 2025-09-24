// write a program to check whether a number is a kaprekar number or not
#include <iostream>
#include <math.h>
using namespace std;

bool isKaprekar(int n)
{
    int digits = (int)log10(n)+1;
    int square = (long long)n*n;
    int topow = (int)pow(10,digits);
    int right = square % topow;
    int left = square / topow;
    if(left + right == n)
        return true;
    return false;
}
int main()
{
    int n;
    cin>>n;
    if(isKaprekar(n))
        cout<<n<<" is a Kaprekar number.";
    else
        cout<<n<<" is not a Kaprekar number yeahhhh.";
}