#include<iostream>

using namespace std;

int reverse(int n, int rev)
{
    if(n==0)
    {
        return rev;
    }
    else{
        int digit=n%10;
        rev=rev*10 + digit;
        n=n/10;
        return reverse(n, rev);
    }
}
int main()
{
    int n;
    cin>>n;
    int rev=0;
    cout<<reverse(n, rev)<<endl;
}