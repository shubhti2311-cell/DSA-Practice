#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node* deletefromEnd(node* head){
    if (head==NULL)
    {
        cout<<"empty "
    }
    
    node* temp=head;
   while (temp->next->next!=NULL)
   {
    temp=temp->next;
   }
   node* del=temp->next;
   temp->next->next=temp->next;
   delete head;
    return head;
}
// node* insertAtPosition(node* head, int value, int position){
//     node* member= new node();
//     member->data=value;
//     if (position==1)
//     {
//        if(head==NULL){
//         head=member;
//         head->next=NULL;
//         return head;
//        }
//        member->next=head;
//        head=member;
// return head;
//     }
//     node * temp= head;
//    for (int i = 1; i < position-1 && temp!=NULL; i++)
//    {
//     temp=temp->next;
//    }
//    if(temp==NULL){
//     cout<<"invalid position";
//     return head;
//    }
//    member->next=temp->next;
//    temp->next=member;
   
   
//     return head;
    
// }
int main()
{

    return 0;
}