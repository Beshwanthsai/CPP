#include<queue>
#include<iostream>

using namespace std;

int main(){
    queue<int> q;
    q.push(32);
    q.push(324);
    q.push(342);
    cout<< q.back() <<endl;
    cout<< q.front() <<endl;
    cout<< q.size() <<endl;
}