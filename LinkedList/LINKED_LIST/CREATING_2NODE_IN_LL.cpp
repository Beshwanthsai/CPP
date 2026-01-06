#include<iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
}s;

int main()
{
    // Node* head = new Node();
    // head->data = 10;
    // head->next = new Node();
    // head->next->data=20;
    // head->next->next = NULL;

    // cout<<head->data<<endl;
    // cout<<head->next->data<<endl;
    // cout<<head->next->next<<endl;
    // return 0;


    Node* first = new Node();
    Node* second = new Node();

    first -> data =10;
    first -> next = second;
    second -> data = 20;
    second-> next = NULL;
   
    Node* head =first;
    Node* temp =head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    return 0;

}