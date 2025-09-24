#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 1) {
        cout << n << " is not a prime number\n";
        return 0;
    }

    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            cout << n << " is not a prime number\n";
            return 0;
        }
    }

    cout << n << " is a prime number\n";
    return 0;
}