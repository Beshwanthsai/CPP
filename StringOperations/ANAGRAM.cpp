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

   for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;
        freq[s2[i]-'a']--;
   }
   for(int it:freq){
    if(it!=0){
        cout<<"Not anagram"<<endl;
    }
   }

    cout << "Anagram";
    return 0;
}