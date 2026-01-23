#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));

    // Input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    unordered_set<int> s;
    int repeated = -1, missing = -1;

    // Find repeated
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int val = a[i][j];
            if (s.count(val)) {
                repeated = val;
            } else {
                s.insert(val);
            }
        }
    }

    // Find missing
    for (int num = 1; num <= n * n; num++) {
        if (s.count(num) == 0) {
            missing = num;
            break;
        }
    }

    cout << "Repeated: " << repeated << endl;
    cout << "Missing: " << missing << endl;

    return 0;
}