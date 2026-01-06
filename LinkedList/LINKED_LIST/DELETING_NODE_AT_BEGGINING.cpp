#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main()
{
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // Delete at beginning (ONLY ONCE)
    if (first != NULL) {
        Node* temp = first;
        first = first->next;
        delete temp;
    }

    // Correct traversal
    Node* current = first;
    while (current != NULL)
    {
        cout << current->data << endl;
        current = current->next;
    }

    return 0;
}