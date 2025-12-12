#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin >> c;

    if (isalpha(c) || isdigit(c))
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "1" << endl;
    }
}