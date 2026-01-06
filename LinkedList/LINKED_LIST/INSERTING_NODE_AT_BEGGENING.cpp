#include<iostream>

using namespace std;
struct Node{
    int data;
    Node* next;
}s;

int main()
{
    Node* head = new Node();
    Node* newnode = new Node();
    head->data = 10;
    head->next=NULL;
    newnode->data=20;
    newnode->next = head;
    head=newnode;
}