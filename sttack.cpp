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



// 
//

//
#include <bits/stdc++.h>
using namespace std;

// Node design of doubly ll
struct Node
{
    int data;
    Node *next;
    Node *prev;
};

struct Doubly_Linked_list
{
    Node *head;

    Doubly_Linked_list(int d)
    {
        head = new Node;
        head->data = d;
        head->prev = nullptr;
        head->next = nullptr;
    }

    void insertBegin(int d)
    {
        Node *temp = new Node;
        temp->data = d;
        temp->prev = nullptr;
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    void insertEnd(int d){
        Node *tail = head;

        while (tail->next != nullptr)
        {
            tail = tail->next;

        }
        Node *temp = new Node;
        temp->data = d;
        temp->next = nullptr;
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }

    void insertMiddle(int prev_val,int new_val){
        Node *newnode = new Node;
        newnode->data = new_val;
        Node *temp = head;
        while (temp -> data != prev_val)
        {
            temp = temp->next;
        }


        newnode->next = temp->next;
        temp->next->prev = newnode;
        temp->next = newnode;
        newnode->prev = temp;
        newnode = temp;


        
        // newnode->prev = temp;
        // Node *temp2 = temp->next;
        // newnode->next = temp2;
        // temp->next = newnode;
        // temp2->prev = newnode;

        ///////////////temp2->next = nullptr;
    }

    void Print()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main()
{

    Doubly_Linked_list list(10);
    list.Print();

    list.insertBegin(5);
    list.Print();

    list.insertEnd(75);
    list.Print();

    list.insertMiddle(5,15);
    list.Print();

    return 0;
}







////
// #include <bits/stdc++.h>

// using namespace std;

// // Node design of doubly ll
// struct Node
// {
//     int data;
//     Node *next;
//     Node *prev;
// };

// struct Doubly_Linked_list
// {
//     Node *head;

//     Doubly_Linked_list(int d)
//     {
//         head = new Node;
//         head->data = d;
//         head->prev = nullptr;
//         head->next = nullptr;
//     }


//     void insertBegin(int d)
//     {
//         Node *temp = new Node;
//         temp->data = d;
//         temp->prev = nullptr;
//         temp->next = head;
//         head->prev = temp;
//         head = temp;
//     }

//     void insertEnd(int d){
//         Node *tail = head;

//         while (tail->next != nullptr)
//         {
//             tail = tail->next;

//         }
//         Node *temp = new Node;
//         temp->data = d;
//         temp->next = nullptr;
//         temp->prev = tail;
//         tail->next = temp;
//         tail = temp;
//     }

//     void insertMiddle(int prev_val,int new_val){
//         Node *newnode = new Node;
//         newnode->data = new_val;
//         Node *temp = head;
//         while (temp -> data != prev_val)
//         {
//             temp = temp->next;
//         }
//         newnode->prev = temp;
//         Node *temp2 = temp->next;
//         newnode->next = temp2;
//         temp->next = newnode;
//         temp2->prev = newnode;
//     }

//     void Print()
//     {
//         Node *temp = head;
//         while (temp != nullptr)
//         {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout<<endl;
//     }
// };

// int main()
// {

//     Doubly_Linked_list list(10);
//     list.Print();

//     list.insertBegin(5);
//     list.Print();

//     list.insertEnd(75);
//     list.Print();

//     list.insertMiddle(5,15);
//     list.Print();

//     return 0;
// }













































// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string st;
//     cout<< "Enter the sting you want to reverse: ";
//     cin>> st;

//     stack<char> sta;

//     for (int i = 0; i < st.length(); i++)
//     {
        
//     }
    
// return 0;
// }
// /*stack <int> st;
//     st.push(15);
//     st.push(25);
//     st.push(75);

//     int x = st.top();
//     cout<< x << " " << endl;

//     st.pop();
//     st.pop();
//     cout<<st.top()<<endl;*/