#include<iostream>
using namespace std;

int reverse(int n, int rev)
{
    if(n == 0)
        return rev;

    int digit = n % 10;
    return reverse(n / 10, rev * 10 + digit);
}

int main()
{
    int n;
    cin >> n;

    int original = n;          
    int rev = reverse(n, 0);   

    if(original == rev)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;
}