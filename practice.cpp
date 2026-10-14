// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// struct node
// {
//     int data;
//     node *next;
// };
// int main()
// {
//     vector<int> a;
//     int n;
//     int x;
//     cout << "Enter the Number of element in an linked list=" << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cout << "enter the  next element " << i + 1 << "position =" << endl;
//         cin >> x;
//         a.push_back(x);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << "your element at " << i + 1 << "position ="
//              << a[i] << endl;
//     }
//     node *head = NULL;
//     node *  temp=NULL;
//     for (int i = 0; i < a.size(); i++)
//     {
//         node *newMember = new node();
//         newMember->data = a[i];
//         newMember->next = NULL;
//         if(head==NULL){
//             head=newMember;
// temp=newMember;
//         }else{
// temp->next=newMember;
// temp=newMember;
//         }
//     }
// temp=head;
// while (temp!=NULL)
// {
//    cout<<temp->data<<" ";
//    temp=temp->next;
// }
// node* curr=head;
// node*nextNode=head->next;
// node*prev=nullptr;
// while (curr!=nullptr)
// {   nextNode=curr->next;
//     curr->next=prev;
//     prev=curr;
//   curr=nextNode;
  
// }
// head=prev;
// temp=head;
// cout<<"cls.."<<endl;
// while (temp!=NULL)
// {
//    cout<<temp->data<<" ";
//    temp=temp->next;

// }
//     return 0;
// }
#include <iostream>
using namespace std;
int find(int a[],int n,int target){
int min=0,i=0;
while (a[i]<a[i+1]&& i<n)
{
    min++;
    i++;
}
int h=min,l=0,mid;
while (l<=h)
{
   mid=l+(h-l)/2;
   if(a[mid]==target){
   return mid;

}else if(a[mid]>target)
{
    h=mid-1;
}else {
    l=mid+1;
}

};
l=min+1,h=n-1;
while (l<=h)
{
   mid=l+(h-l)/2;
   if(a[mid]==target){
   return mid;

}else if(a[mid]>target)
{
    h=mid-1;
}else {
    l=mid+1;
}


}
return -1;}
int main() {
    
    return 0;
}