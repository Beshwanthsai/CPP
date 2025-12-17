#include<iostream>

using namespace std;

int reverse(int n, int rev)
{
    if(n==0)
    {
        return rev;
    }
    else{
        rev=rev*10 + n%10;
        return reverse(n/10, rev);
    }
}
int main()
{
    int n;
    cin>>n;
    int rev=0;
    cout<<reverse(n, rev)<<endl;
}