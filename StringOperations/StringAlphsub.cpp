#include<iostream>
#include<string>

using namespace std;
int main()
{
    string str;
    cin>>str;
    int count=0;
    int count1=0;
    int length = str.length();
    for(int i=0;i<length;i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            count++;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            count1++;
        }
    }
    cout<<count-count1<<endl;
}
