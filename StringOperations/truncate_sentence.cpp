#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string res="",word;
        int count=0;
        while (ss >> word) {
            res += word + " ";
            count++;
            if (count == k) break;
        }

         if (!res.empty())
        res.pop_back();
        return res;
    }
};

int main() {
    Solution sol;
    
    // Test case 1
    string s1 = "Hello how are you Contestant";
    int k1 = 4;
    cout << "Input: s = \"" << s1 << "\", k = " << k1 << endl;
    cout << "Output: \"" << sol.truncateSentence(s1, k1) << "\"" << endl;
    cout << endl;
    
    // Test case 2
    string s2 = "What is the solution to this problem";
    int k2 = 4;
    cout << "Input: s = \"" << s2 << "\", k = " << k2 << endl;
    cout << "Output: \"" << sol.truncateSentence(s2, k2) << "\"" << endl;
    cout << endl;
    
    // Test case 3
    string s3 = "chopper is not a tanuki";
    int k3 = 5;
    cout << "Input: s = \"" << s3 << "\", k = " << k3 << endl;
    cout << "Output: \"" << sol.truncateSentence(s3, k3) << "\"" << endl;
    
    return 0;
}