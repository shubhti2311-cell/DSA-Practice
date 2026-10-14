// //function to insert a node at position IN doubly circular linked list
// node* insertAtposn(node* head, int position, int val)
// {
//     node* elem = new node();

//     elem->data = val;
//     elem->prev = NULL;
//     elem->next = NULL;

//     if (head == NULL)
//     {
//         cout << "Empty linked list" << endl;
//         delete elem;
//         return head;
//     }
    
//     if (position<=0)
//     {
//       cout<<"Invalid position.."<<endl;
//     }
//     if (position==1)
//     {
//       elem->next=head;
//       elem->prev=head->prev;
//       head->prev=elem;
      
//       node* temp=head;
//       while (temp->next!=head)
//       {
//        temp=temp->next;
//       }
//       temp->next=elem;
//       head=elem;
//       return head;
      
//     }
    

//     if (head->next == head)
//     {
//         elem->prev = head;
//         elem->next = head;
//         head->prev = elem;
//         head->next = elem;
//         head = elem;
//         return head;
//     }

//     node* temp = head;

//     for (int i = 1; i < position - 1 && temp->next != head; i++)
//     {
//         temp = temp->next;
//     }

//     elem->prev = temp;
//     elem->next = temp->next;
//     temp->next->prev = elem;
//     temp->next = elem;

//     return head;
// }


