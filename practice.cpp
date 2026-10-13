#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
int main()
{
    vector<int> a;
    int n;
    int x;
    cout << "Enter the Number of element in an linked list=" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the  next element " << i + 1 << "position =" << endl;
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        cout << "your element at " << i + 1 << "position ="
             << a[i] << endl;
    }
    node *head = NULL;
    node *  temp=NULL;
    for (int i = 0; i < a.size(); i++)
    {
        node *newMember = new node();
        newMember->data = a[i];
        newMember->next = NULL;
        if(head==NULL){
            head=newMember;
temp=newMember;
        }else{
temp->next=newMember;
temp=newMember;
        }
    }
temp=head;
while (temp!=NULL)
{
   cout<<temp->data<<" ";
   temp=temp->next;
}
node* curr=head;
node*nextNode=head->next;
node*prev=nullptr;
while (curr!=nullptr)
{   nextNode=curr->next;
    curr->next=prev;
    prev=curr;
  curr=nextNode;
  
}
head=prev;
temp=head;
cout<<"cls.."<<endl;
while (temp!=NULL)
{
   cout<<temp->data<<" ";
   temp=temp->next;

}
    return 0;
}