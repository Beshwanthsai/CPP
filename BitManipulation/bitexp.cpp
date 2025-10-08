#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout << (a & b) << "\n"; // AND
    cout << (a | b) << "\n"; // OR
    cout << (a ^ b) << "\n"; // XOR
    cout << (~a) << "\n";    // NOT
    cout << (a << 1) << "\n"; // Left shift
    cout << (a >> 1) << "\n";  // Right shift
}