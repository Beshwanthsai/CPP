#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    // If lengths differ, cannot be anagram
    if (s1.length() != s2.length()) {
        cout << "Not Anagram";
        return 0;
    }

    int freq[26] = {0};

    // Count characters of first string
    for (char c : s1) {
        freq[c - 'a']++;
    }

    // Subtract characters of second string
    for (char c : s2) {
        freq[c - 'a']--;
    }

    // Check if all frequencies are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram";
    return 0;
}