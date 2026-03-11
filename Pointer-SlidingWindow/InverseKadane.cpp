#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int curmin=0;
    int min_sum=INT_MAX;

    for(int i=0;i<n;i++){
        curmin += a[i];
        min_sum = min(curmin,min_sum);

        if(curmin>0){
            curmin = 0;
        }
    }
    cout<<min_sum<<endl;
}