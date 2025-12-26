#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;

    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        return;
    }

    Node* temp = head;
    while (temp->next != head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = head;
}

void display() {
    if (head == NULL) {
        cout << "List is empty";
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(back to head)";
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    display();
    return 0;
}
