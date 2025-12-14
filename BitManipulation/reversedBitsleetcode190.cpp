#include <iostream>
#include <bitset>
#include <algorithm>
using namespace std;

int main() {
    unsigned int n;
    cin >> n;

    string s = bitset<32>(n).to_string();
    reverse(s.begin(), s.end());

    unsigned int result = stoi(s, nullptr, 2);

    cout << result << endl;

    return 0;
}