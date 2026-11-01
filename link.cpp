
#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};
 int findNth(node *head,int n){
    if (head==NULL)
    {cout<<"empty list"<<endl;
       return 0;
    }
    node *temp=head;
    int count=0;
    while (temp!=NULL)
    {
      count++;
      temp=temp->next;
    }
    temp=head;
    if(count<n){
        cout<<"INvalid position"<<endl;
        return head->data;
    }
    for (int i =1; i <= count-n; i++)
    {
        temp=temp->next;
    }
    return temp->data;
    


    

    
 }
int main() {
    node* head = NULL;
    node* temp = NULL;
    node* newnode = NULL;

    // Creating 5 nodes
    for (int i = 1; i <= 5; i++) {
        newnode = new node();

        cout << "Enter data for node " << i << ": ";
        cin >> newnode->data;

        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    // Displaying the linked list
    cout << "Linked List: ";

    temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
    int shubh=findNth(head,2);
cout<<"value of 2nd node from the end will be = "<<shubh<<endl;
    return 0;
}