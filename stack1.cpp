#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *head;
    int top = -1;

    void push(int val)
    {
        node *mem = new node();
        mem->data = val;
        if (top == -1)
        {
            head = mem;
            head->next = nullptr;
            top++;
            return;
        }
        mem->next = head;
        head = mem;
        top++;
        return;
    };
    int pop()
    {
        if (top == -1)
        {
            return -1;
        }
        node *deleteNode = head;
        head = head->next;
        int val = deleteNode->data;
        top--;
        delete deleteNode;
        return val;
    }
    void print()
    {
        node *temp = head;
        while (temp->next != nullptr)
        {
            cout << temp->data << " ";

            temp = temp->next;
        }
    }
};
int main()
{

    return 0;
}
