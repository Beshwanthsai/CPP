#include<iostream>
#include<queue>
#include<vector>


using namespace std;

int main(){
    int n;
    cout<<"Enter array elemets size: "<<endl;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k=3; //for k elements

    priority_queue<int, vector<int>, greater<int>> p;
    for(int c:a){
        p.push(c);

        if(p.size()>k){
            p.pop();
        }
    }
    cout<<"3 elements in array:";

    while(!p.empty()){
        cout<<p.top()<<endl;
        p.pop();
    }

}