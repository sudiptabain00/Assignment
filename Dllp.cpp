#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

int getlength(Node *&head)
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
void insertAthead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAt_Tail(Node *&head, Node *&tail, int data)
{
    Node *temp = new Node(data);
    if (temp == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = head;
        tail = temp;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    if (position == 1)
    {
        insertAthead(head, tail, data);
        return;
    }

    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertAt_Tail(head, tail, data);
        return;
    }

    Node *nodeinsert = new Node(data);

    nodeinsert->next = temp->next;
    temp->next->prev = nodeinsert;
    temp->next = nodeinsert;
    nodeinsert->prev = temp;
}

void deleteAthead(Node *&head)
{
    Node *tempx = head;
    head = head->next;
    head->prev = NULL;
    delete tempx;
}

void deleteNodeposition(Node *&head, Node *&tail, int position, int data)
{

    int count = 1;
    Node *temp = head;
    if (position == 1)
    {
        deleteAthead(head);
        return;
    }
    while (temp != NULL && count != position)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;

    while (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    delete temp;
}

void printList(Node *&head)
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
    Node *tail = NULL;

    printList(head);

    insertAthead(head, tail, 15);
    printList(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    cout << endl;
    insertAthead(head, tail, 25);
    printList(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    cout << endl;

    insertAthead(head, tail, 35);
    printList(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    cout << endl;

    insertAt_Tail(head, tail, 75);
    printList(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    cout << endl;

    insertAt_Tail(head, tail, 55);
    printList(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    cout << endl;

    insertAtPosition(head, tail, 3, 70);
    printList(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    cout << endl;

    insertAtPosition(head, tail, 5, 80);
    printList(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    cout << endl;

    // deleteAthead(head);
    // printList(head);

    // cout<<"Head: " << head->data << endl;
    // cout<<"Tail: " << tail->data << endl;
    // cout<<endl;

    deleteNodeposition(head, tail, 2, 25);
    printList(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    cout << endl;

    deleteNodeposition(head, tail, 3, 15);
    printList(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    cout << endl;

    deleteNodeposition(head, tail, 4, 75);
    printList(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    cout << endl;

    deleteNodeposition(head, tail, 4, 55);
    printList(head);

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;
    cout << endl;





    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// int main(){

//     string st;
//     cout<<"Enter the string you want to reverse: ";
//     cin>>st;

//     stack<char> s;

//     for (int i = 0; i < st.length(); i++)
//     {
//         s.push(st[i]);

//     }

//     cout<< s.size() << endl;

//     while (!s.empty())
//     {
//         cout<< s.top();
//         s.pop();

//     }

//     // stack <int> s;
//     // s.push(10);
//     // // s.push(5);
//     // // s.push(7);
//     // // s.push(27);
//     // // s.push(70);

//     // cout<< s.top() << " " << s.size() << endl;

//     // s.pop();
//     // //cout<< s.top() << " " << s.size()<< endl;

//     // if(s.empty()){
//     //     cout<<"The Stack is empty......Please insert!!!!!"<<endl;
//     // }
//     // else
//     // {
//     //      cout<<"The Stack is nott empty!"<<endl;
//     // }

//     return 0;
// }
