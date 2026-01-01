#include <iostream>
#include <string>
#include<vector>

using namespace std;

class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
        int mid = n / 2;
        int co1 = 0, co2 = 0;

        for (int i = 0; i < n; i++) {
            if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'
             || s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {

                if (i < mid)
                    co1++;
                else
                    co2++;
            }
        }
        return co1 == co2;
    }
};

int main() {
    Solution sol;

    string s;
    cin >> s;  

    cout << (sol.halvesAreAlike(s) ? "true" : "false") << endl;

    return 0;
}