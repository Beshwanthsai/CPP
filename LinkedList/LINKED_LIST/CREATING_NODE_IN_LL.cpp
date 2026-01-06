#include<iostream>

using namespace std;
struct Node{
    int data;
    Node* next;
}s;


int main()
{
    Node* head =new Node();
    head->data = 10;
    head->next=NULL;

    cout<<head->data<<endl;
    cout<<head->next<<endl;
    return 0;
}