#include <string>
#include <sstream>
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