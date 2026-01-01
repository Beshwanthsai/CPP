#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(); 

    vector<string> s(n);

    for(int i = 0; i < n; i++) {
        getline(cin, s[i]);
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        stringstream ss(s[i]);
        string word;
        int count = 0;

        while (ss >> word) {
            count++;
        }

        if (count > ans)
            ans = count;
    }

    cout << ans << endl;
    return 0;
}