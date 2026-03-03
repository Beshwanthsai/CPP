#include<iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(45);
    pq.push(1);
    pq.push(-1);
    pq.push(0);

    cout<<"top of the queue : "<<pq.top()<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}