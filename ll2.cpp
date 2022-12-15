#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }

    Node(){
        int value = this->data;

        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
    
};

void InsertatHead(Node *&head, int data)
{
    Node *temp = new Node(data);

 //   temp->data = data;
    temp->next = head;
    head = temp;
}

void InsertatTail(Node *&tail,int data){

    Node *temp = new Node(data);

    tail->next = temp;
    tail = temp;
}


void Insertionatposition(Node *&head,Node *&tail,int position,int data){

    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    
    if (position == 1)
    {
        InsertatHead(head,data);
        return;
    }

    if (temp ->next == NULL)
    {
        InsertatTail(tail,data);
        return;
    }

    Node *newnode = new Node(data);
    newnode->next = temp->next;
    temp->next = newnode;

    
}


void PrintList(Node *&head)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void DeletePostion(int position, Node * &head){
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while(count < position) {
           prev = curr;
           curr = curr -> next;
            count++;
    }
    prev -> next = curr -> next;
    curr -> next  = NULL;
    delete curr;

    }
}

int main()
{

    Node *first_node = new Node(90);

    // cout<< first_node->data << endl;
    // cout<<first_node->next <<endl;

    Node *head = first_node;
    Node *tail = first_node;

    PrintList(head);
    InsertatTail(tail,75);
    PrintList(head);

    InsertatTail(tail,25);
    PrintList(head);

    Insertionatposition(head,tail,4,54);
    PrintList(head);

    cout<< "Head: "<< head->data << endl;
    cout << "Tail: "<< tail->data << endl;

    DeletePostion(4,head);
    PrintList(head);

    cout<< "Head: "<< head->data << endl;
    cout << "Tail: "<< tail->data << endl;


    return 0;
}

/*class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void InsertatHead(Node *&head,int data){
    Node *temp = new Node(data);
    temp ->data = data;
    temp->next = head;
    head = temp;
}

void InsertatTail(Node *&tail, int data)
{

    Node *temp = new Node(data);
  //  tail->data = data;
    tail->next = temp;
    //tail = temp;

    tail = tail->next;
}

void PrintNode(Node *&head){
    Node *temp = head;

    while (temp != NULL)
    {
        cout<< temp->data << " ";
        temp = temp->next;
    }
    cout<< endl;


    Node *node = new Node(78);

    // cout<< node -> data << endl;
    // cout<< node -> next << endl;
    Node *head = node;
    PrintNode(head);
    InsertatHead(head,23);
    PrintNode(head);

    Node *tail = first_node;

    PrintList(head);
    InsertatTail(tail, 25);
    PrintList(head);

    InsertatTail(tail, 250);
    PrintList(head);
}*/