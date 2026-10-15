
#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void reverse(node*& head) {
    node* prev = nullptr;
    node* curr = head;
    node* next = nullptr;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
}

void display(node* head) {
    node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* head = new node{10, nullptr};
    head->next = new node{20, nullptr};
    head->next->next = new node{30, nullptr};
    head->next->next->next = new node{40, nullptr};

    cout << "Original Linked List: ";
    display(head);

    reverse(head);

    cout << "Reversed Linked List: ";
    display(head);

    return 0;
}
