#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxCount = 0, maxElement = a[0];
    for(int i=0;i<n;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }
        if(count > maxCount)
        {
            maxCount = count;
            maxElement = a[i];
        }
    }
    cout << "Maximum repeating element is: " << maxElement << " with count: " << maxCount << endl;
}