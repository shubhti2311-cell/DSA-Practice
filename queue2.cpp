#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node*head=nullptr;
    node* rear=nullptr;
void enque(int val){
    node* member= new node();
    member->data=val;
    if (head==nullptr)
    {
        head=member;
        head->next=nullptr;
        rear=head;
        return;
    }
    node* temp=head;
    while (temp!=nullptr)
    {
        temp=temp->next;
    
    }
    temp->data=member->data;
    member->next=temp->next;
    rear=rear->next;
}
int dqueue(){
    if (head==nullptr)
    {
        return;
        
    }

    node*temp=head;
    while (temp->next->next=nullptr)
    {
    temp=temp->next;
    }
    node* ;
};
};
int main() {
    
    return 0;
}