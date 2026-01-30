#include<iostream>
 #include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n; //n should be onyl 3 because of triangle
    vector<int> k(n);
    for(int i=0;i<n;i++)
    {
        cin>>k[i];
    }
    int a=k[0],b=k[1],c=k[2];
    for(int i=0;i<n;i++)
    {
        if(a+b<=a || a+c<=b ||b+c<=a)
        {
            cout<<"Not a triangle"<<endl;
            break;
        }
        else if(a==b && b==c)
        {
            cout<<"Equilateral triangle"<<endl;
            break;
        }
        else if(a==b || b==c || a==c)
        {
            cout<<"Isosceles triangle"<<endl;
            break;
        }
        else
        {
            cout<<"Scalene triangle"<<endl;
            break;
        }
    }
}