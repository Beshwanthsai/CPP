#include<iostream>
#include<vector>

using namespace std;

int main(){
   int arr[] = {1,2,3,4,5};
   int *ptr = arr+2;
   cout<<*ptr<<endl;
}