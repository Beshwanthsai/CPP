#include<iostream>
// using namespace std;
// int main()
// {
//     int n,esum=0,osum=0;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//         if(a[i]%2==0)
//         {
//             esum+=a[i];
//         }
//         else
//         {
//             osum+=a[i];
//         }
//     }
//     cout<<"Even sum: "<<esum<<endl;
//     cout<<"Odd sum: "<<osum<<endl;
// }


using namespace std;
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int even = 0, odd = 0;
    for (int x : arr)
        (x % 2 == 0 ? even++ : odd++);
    cout << "Even = " << even << ", Odd = " << odd;
}