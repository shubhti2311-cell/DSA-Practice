#include <iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
void insert(node* &head,int item,int position){
    node* newElement=new node();
    newElement->data=item;
    if (position==1)
    {
newElement->next=head;
head=newElement;
return;
    }
    node* temp=head;
    for (int i = 1; i < position-1;i++)
    {
         temp=temp->next;
    }
    if (temp == NULL)
    {
        cout<<"invalid position..."<<endl;
        return;
    }
    newElement->next=temp->next;
    temp->next=newElement;
    // return;
}

int main() {
    
    return 0;
}