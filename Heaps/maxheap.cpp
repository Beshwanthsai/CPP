#include<iostream>
#include<queue>

using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(4);
    pq.push(500);
    pq.push(1);

    cout<< " Top of the queue:"<<pq.top()<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}