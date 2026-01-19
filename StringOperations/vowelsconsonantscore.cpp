#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int vowels=0, consonants=0;
    for(char c : s)
    {
        if((c>='a' && c<='z') || (c>='A' && c<='Z'))
        {
            char lower_c = tolower(c);
            if(lower_c=='a' || lower_c=='e' || lower_c=='i' || lower_c=='o' || lower_c=='u')
                vowels++;
            else
                consonants++;  
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout<<vowels/consonants<<endl;
}

// 3813 leetcode problem solved