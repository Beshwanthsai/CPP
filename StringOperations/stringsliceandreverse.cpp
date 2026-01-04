#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int k;

    // Input
    cin >> s;
    cin >> k;

    // Reverse first k characters
    int left = 0, right = k - 1;
    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }

    // Output
    cout << s << endl;

    return 0;
}