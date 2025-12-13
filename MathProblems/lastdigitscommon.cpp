#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    n = abs(n); 

    if (n < 10) {
        cout << "invalid input";
    } else {
        int last = n % 10;
        int secondLast = (n / 10) % 10;

        if (last == secondLast)
            cout << "yes";
        else
            cout << "no";
    }
    return 0;
}