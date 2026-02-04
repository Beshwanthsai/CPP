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
    
    string s = "Hello how are you Contestant";
    int k = 4;
    cout << "Output: \"" << sol.truncateSentence(s, k) << "\"" << endl;
    
    return 0;
}