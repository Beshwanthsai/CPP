#include<iostream>
#include<string>


using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int count = 0;
    bool inword = false;

for(int i=0;i<str.length();i++)
{
    if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
    {
        inword = false;
    }
    else if(inword == false)
    {
        inword = true;
        count++;
    }   
}
cout << count;
}