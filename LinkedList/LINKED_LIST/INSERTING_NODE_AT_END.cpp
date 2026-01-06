#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
}s;

int main()
{
    Node* first =new Node();
    Node* second =new Node();
    first->data = 10;
    first->next=second;

    second->data=20;
    second->next=NULL;

    Node* newnode = new Node();
    newnode->data = 30;
    newnode->next = NULL;

    Node* temp = first;
    while(temp-> next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    temp = first;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    return 0;
}