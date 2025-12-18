#include <iostream>
#include <vector>
using namespace std;

void printarray(int arr[], int n)
{
    if (n == 0)
        return;

    cout << arr[0] << endl;
    printarray(arr + 1, n - 1);
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    printarray(arr.data(), n);
}
