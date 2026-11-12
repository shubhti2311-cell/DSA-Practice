
#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
    node* prev;

    node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

void insertAtPosition(node*& head, int value, int pos)
{
    if (pos < 1)
    {
        cout << "Invalid position" << endl;
        return;
    }

    node* newNode = new node(value);

    // Case 1: Insert at the beginning
    if (pos == 1)
    {
        newNode->next = head;

        if (head != NULL)
        {
            head->prev = newNode;
        }

        head = newNode;
        return;
    }

    node* temp = head;

    // Reach the node just before the required position
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    // Position is out of range
    if (temp == NULL)
    {
        cout << "Invalid position" << endl;
        delete newNode;
        return;
    }

    // Connect the new node
    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL)
    {
        temp->next->prev = newNode;
    }

    temp->next = newNode;
}

void display(node* head)
{
    node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main()
{
    node* head = new node(10);
    node* second = new node(20);
    node* third = new node(30);

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    cout << "Original list: ";
    display(head);

    insertAtPosition(head, 25, 3);

    cout << "After insertion: ";
    display(head);

    return 0;
}

