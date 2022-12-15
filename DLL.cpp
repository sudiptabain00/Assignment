#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

void InsertAtHead(Node *&head, int data)
{
    Node *h_node = new Node(data);
    h_node->next = head;
    if (head != NULL)
    {
        head->prev = h_node;
    }
    head = h_node;
}

void InsertAtTail(Node *&head, int data)
{

    if (head == NULL)
    {
        InsertAtHead(head, data);
        return;
    }

    Node *newnode = new Node(data);
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->prev = temp;
}

void deleteatHead(Node *&head)
{
    Node *temp2 = head;
    head = head->next;
    head->prev = NULL;

    delete temp2;
}
void deleteNode(Node* &head, int pos,int data)
{
    Node *temp = head;
    int count = 1;

    if (pos == 1)
    {
        deleteatHead(head);
         return;
    }
    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }

    temp->prev->next = temp->next;

    if (temp->next != nullptr)
    {
        temp->next->prev = temp->prev;
    }
    delete temp;
}

/*void deleteNode(Node *&head, int position, int data)
{
    // deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        if (curr->next != NULL)
        {
            prev->next = curr->next;
        }

        curr->next = NULL;
        delete curr;
    }
}*/

void print_display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    InsertAtHead(head, 15);
    InsertAtHead(head, 25);
    InsertAtHead(head, 35);
    InsertAtHead(head, 45);
    print_display(head);
    InsertAtHead(head, 75);
    print_display(head);

    deleteNode(head, 1, 75);
    print_display(head);

    deleteNode(head, 4, 25);
    print_display(head);

    // deleteNode(head, 3,15);
    // print_display(head);

    //45 35 25 15
    //75 45 35 25 15
    //45 35 25 15
    //45 35 25 

    return 0;
}

// /*#include<iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* prev;
//     Node* next;

//     //constructor
//     Node(int d ) {
//         this-> data = d;
//         this->prev = NULL;
//         this->next = NULL;
//     }

//     Node() {
//         int val = this -> data;
//         if(next != NULL) {
//             delete next;
//             next = NULL;
//         }
//         cout << "memory free for node with data "<< val << endl;
//     }
// };

// //traversing a linked list
// void print(Node* head) {
//     Node* temp  = head ;

//     while(temp != NULL) {
//         cout << temp -> data << " ";
//         temp  = temp -> next;
//     }
//     cout << endl;
// }

// //gives length of Linked List
// int getLength(Node* head) {
//     int len = 0;
//     Node* temp  = head ;

//     while(temp != NULL) {
//         len++;
//         temp  = temp -> next;
//     }

//     return len;
// }
// void insertAtHead(Node* &tail, Node* &head, int d) {

//     //empty list
//     if(head == NULL) {
//         Node* temp = new Node(d);
//         head = temp;
//         tail = temp;
//     }
//     else{
//         Node* temp = new Node(d);
//         temp -> next = head;
//         head -> prev = temp;
//         head = temp;
//     }

// }

// void insertAtTail(Node* &tail,Node* &head, int d) {
//     if(tail == NULL) {
//         Node* temp = new Node(d);
//         tail = temp;
//         head = temp;
//     }
//     else{
//         Node* temp = new Node(d);
//         tail -> next  = temp;
//         temp -> prev = tail;
//         tail = temp;
//     }

// }

// void insertAtPosition(Node* & tail, Node* &head, int position, int d) {

//     //insert at Start
//     if(position == 1) {
//         insertAtHead(tail,head, d);
//         return;
//     }

//     Node* temp  = head;
//     int cnt = 1;

//     while(cnt < position-1) {
//         temp = temp->next;
//         cnt++;
//     }

//     //inserting at Last Position
//     if(temp -> next == NULL) {
//         insertAtTail(tail,head,d);
//         return ;
//     }

//     //creating a node for d
//     Node* nodeToInsert = new Node(d);

//     nodeToInsert ->next = temp -> next;
//     temp -> next -> prev = nodeToInsert;
//     temp -> next = nodeToInsert;
//     nodeToInsert -> prev = temp;
// }

// //void deleteNode(int d,int position, Node* & head,Node* &tail) {
// void deleteNode(int position,int d, Node* & head) {
//     //deleting first or start node
//     if(position == 1) {
//         Node* temp = head;
//         temp -> next -> prev = NULL;
//         head = temp ->next;
//        //tail= temp->next;
//         temp -> next = NULL;
//         delete temp;
//     }
//     else
//     {
//         //deleting any middle node or last node
//       //  Node* curr = head;
//        // Node *tail;
//        // Node *curr = tail;
//         Node* prev = NULL;

//         int cnt = 1;
//         while(cnt < position) {
//             //prev = curr;
//           //  curr = curr -> next;

//           prev = tail;
//           tail = tail->next;
//             cnt++;
//         }

//         temp->prev->next = temp->next;
//         if (temp->next != NULL)
//         {
//             temp->next->prev = temp->prev;
//         }
//         delete temp;
//         // //curr -> prev = NULL;
//         // tail->prev = NULL;

//         // // prev -> next = curr -> next;
//         // prev -> next = tail -> next;
//         // // curr -> next = NULL;
//         // tail -> next = NULL;

//         // //delete curr;
//         // // delete tail;

//     }
// }

// int main() {

//     Node* head = NULL;
//     Node* tail = NULL;

//     print(head);
//     //cout << getLength(head) << endl;

//     insertAtHead(tail,head, 11);
//     print(head);
//     cout << "head  " << head -> data << endl;
//     cout << "tail  " << tail -> data << endl;

//     insertAtHead(tail,head, 13);
//     print(head);
//     cout << "head  " << head -> data << endl;
//     cout << "tail  " << tail -> data << endl;

//     insertAtHead(tail,head, 8);
//     print(head);
//     cout << "head  " << head -> data << endl;
//     cout << "tail  " << tail -> data << endl;

//     insertAtTail(tail,head, 25);
//     print(head);
//     cout << "head  " << head -> data << endl;
//     cout << "tail  " << tail -> data << endl;

//     insertAtPosition(tail, head, 2, 100);
//     print(head);
//     cout << "head  " << head -> data << endl;
//     cout << "tail  " << tail -> data << endl;

//     insertAtPosition(tail, head, 1, 101);
//     print(head);

//     cout << "head  " << head -> data << endl;
//     cout << "tail  " << tail -> data << endl;

//     insertAtPosition(tail, head, 7, 102);
//     print(head);
//     cout << "head  " << head -> data << endl;
//     cout << "tail  " << tail -> data << endl;

//     deleteNode(7,102,head,tail);
//   //deleteNode(7,102,head);
//     print(head);
//     cout << "head  " << head -> data << endl;
//     cout << "tail  " << tail -> data << endl;

//     return 0;
// }