#include<iostream>
#include<vector>

using namespace std;

int main(){
    int arr[] = {1, 500, 3, 4};
int *p = &arr[1];
int *q = &arr[3];
cout<<p-q;
}