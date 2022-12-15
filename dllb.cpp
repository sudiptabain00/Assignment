#include<bits/stdc++.h>
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    //constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    // ~Node()
    // {
    //     int val = this->data;
    //     if (next != NULL)
    //     {
    //         delete next;
    //         next = NULL;
    //     }
    //     cout << "memory free for node with data " << val << endl;
    // }
};

// traversing a linked list
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// gives length of Linked List
int getLength(Node *&head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}
void insertAtHead(Node *&tail, Node *&head, int d)
{

    // empty list
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{

    // insert at Start
    if (position == 1)
    {
        insertAtHead(tail, head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // // inserting at Last Position
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteatHead(Node* &head)
{
    Node *temp2 = head;
    head = head->next;
    head->prev = NULL;

    delete temp2;
}
void deleteNode(Node* &head, Node* &tail,int pos,int data)
{   
    if (head == NULL)
    {
        cout<< "List is Empty" << endl;
    }
    
    Node *temp = head;
    int count = 1;

    if (pos == 1)
    {
        deleteatHead(head);
         return;
    }else
    {
        while (temp != NULL && count != pos)
        {
            temp = temp->next;
            count++;
        }


        temp->prev->next = temp->next;

        
        //   Node *temp;
        // temp = head;

        // while(temp->next->next != NULL)
        // {
        //     temp = temp->next;
        // }
        // delete(temp->next);
        // temp->next = NULL;
    }
    if (temp->next != nullptr)
    {
        temp->next->prev = temp->prev;
    }
   
    delete temp;
}

    // deleting any middle node or last node
    //  Node* curr = head;
    //  Node* prev = NULL;

    // int cnt = 1;
    // while(cnt < position) {
    //     prev = curr;
    //     curr = curr -> next;
    //     cnt++;
    // }

    // curr -> prev = NULL;
    // if (curr->next != NULL)
    // {
    //     prev -> next = curr -> next;
    // }
    // curr -> next = NULL;

    // // delete curr;
    // }
    // }

    int main()
    {

        Node *head = NULL;
        Node *tail = NULL;

        print(head);
       
        insertAtHead(tail, head, 11);
        print(head);
        cout<<"head  " << head->data << endl;
        cout <<"tail  " << tail->data << endl;

        insertAtHead(tail, head, 13);
        print(head);
        cout<< endl << "head  " << head->data << endl;
        cout << "tail  " << tail->data << endl;

        insertAtHead(tail, head, 8);
        print(head);
        cout<< endl << "head  " << head->data << endl;
        cout << "tail  " << tail->data << endl;

        insertAtTail(tail, head, 25);
        print(head);
        cout << "head  " << head->data << endl;
        cout << "tail  " << tail->data << endl;

        insertAtPosition(tail, head, 2, 100);
        print(head);
        cout<< endl << "head  " << head->data << endl;
        cout << "tail  " << tail->data << endl;

        insertAtPosition(tail, head, 1, 101);
        print(head);

        cout<< endl << "head  " << head->data << endl;
        cout << "tail  " << tail->data << endl;

        insertAtPosition(tail, head, 7, 102);
        print(head);
         cout <<"Length: " << getLength(head) << endl;

        cout<< endl << "head  " << head->data << endl;
        cout << "tail  " << tail->data << endl;

        

        deleteNode(head,tail,3, 100);
        print(head);
        
        cout<< endl<<"deleted...";
        cout<< endl << "head  " << head->data << endl;
        cout << "tail  " << tail->data << endl;

       


        deleteNode(head,tail,6, 102);
        print(head);
        cout<< endl<<"deleted...";
        cout<< endl << "head  " << head->data << endl;
         cout << "tail  " << tail->data << endl;
         
        return 0;
    }