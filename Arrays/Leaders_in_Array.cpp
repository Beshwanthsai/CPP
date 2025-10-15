#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    int n = arr.size();

    cout << "Leaders: ";
    int maxRight = arr[n - 1];
    cout << maxRight << " "; 


    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            cout << arr[i] << " ";
            maxRight = arr[i];
        }
    }
    return 0;
}