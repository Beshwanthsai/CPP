#include<iostream>
#include<vector>

using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int *ptr = arr;
    cout<<*ptr;
}
// wont it return the whole array if the arr is pointed to the ptr?