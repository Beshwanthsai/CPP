// a prograM to claculate the number of dights in a given number

#include<iostream>

using namespace std;
 // namespace std;
int main()
{

    int n;
    cin>>n;
    int count = 0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    cout<<count;
}
