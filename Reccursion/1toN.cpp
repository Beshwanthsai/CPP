#include<iostream>

using namespace std;

void print1ton(int n);


int main()
{
    int n;
    cin>>n;
    print1ton(n);
    
}
void print1ton(int n)
{
    if(n==0)
    {
        return;
    }
    else{
        print1ton(n-1);
        cout<<n<<endl;
    }
}
