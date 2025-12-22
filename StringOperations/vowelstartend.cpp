#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main()
{
    string s;
    int count = 0;


    while(cin >> s) {
        for(int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);    
        }
        char left = s[0];
        char right = s[s.length()-1]; 
        if(left=='a' || left=='e' || left=='i' || left=='o' || left=='u')
        {
            if(right=='a' || right=='e' || right=='i' || right=='o' || right=='u')
            {
                count++;
            }
        }
    }
    cout << "Count: " << count << endl;
    return 0;
}