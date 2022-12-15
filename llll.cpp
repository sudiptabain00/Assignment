#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *next;
};

class Singly_Linked_List{
public:
    // Create a Head Pointer
    Node *head;

    // Constructor to Create first node of the linked list
    Singly_Linked_List(int d){
        head=new Node;
        head->data=d;
        head->next=nullptr;

    }

    // Function to insert at the beginning of the list
    void InsertAtHead(int d){
        Node *temp=new Node;
        temp->data=d;
        temp->next=head;
        head=temp;
    }

    // Function to insert at the end of the list
    void InsertAtEnd(int d){
        Node* temp=new Node;
        temp->data=d;

        Node *tail=head;
        while(tail->next!=nullptr){
            tail=tail->next;
        }

        tail->next=temp;

        temp->next=nullptr;
    }

    // Function to insert value after a certain position
    void InsertAtPosition(int prev_val,int new_val){
        Node *temp=new Node;
        temp->data=new_val;

        Node *prev_node=head;
        while(prev_node->data!=prev_val){
            prev_node=prev_node->next;
        }

        temp->next=prev_node->next;

        prev_node->next=temp;
    }

    // Function to search an element in the list
    Node* searchList(int item){
        Node *temp=head;
        while(temp->next!=nullptr){
            if(temp->data==item){
                return temp;
            }
            else{
                temp=temp->next;
            }
        }
        return nullptr;
    }

    // Function to delete starting node
    void DeleteAtFirst(){
        Node *temp=head;

        head=temp->next;
        delete temp;
        return;
    }

    // Function to delete the tail node
    void DeleteAtTail(){
        Node *prev_Node=nullptr;
        Node *curr_Node=head;
        while(curr_Node->next!=nullptr){
            prev_Node=curr_Node;
            curr_Node=curr_Node->next;
        }
        prev_Node->next=nullptr;
        delete curr_Node;
        return;
    }

    // Function to delete node with a key value
    void DeleteAtPosition(int key){
        Node *temp=head;
        Node *prev=nullptr;

        if(temp->data==key){
            head=temp->next;
            delete temp;
            return;
        }
        else{
            while(temp->data!=key){
                prev=temp;
                temp=temp->next;
            }
            if(temp==nullptr){
                return;
            }
            else{
                prev->next=temp->next;
                delete temp;
            }
        }

    }

    // Function for printing the linked list
    void print(){
        Node *temp=head;

        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main()
{
    int ch,d;

    // Creating a linked list with one node
    cout<<"-------------------- Creating a Linked List --------------------\n\n";
    cout<<"Enter the data of your first node: ";
    cin>>d;
    Singly_Linked_List list1(d);

    cout<<"\nThe numbers to choose for the operation you want to perform is: "<<endl;
    cout<<"1. Insert node at the beginning \n2. Insert node at end \n3. Insert after a certain value \n4. Searching the linked list for an element \n5. Deleting first node \n6. Deleting last node \n7. Deleting using a key value \n8. Print the Linked List \n0. Exit the program\n\n";

    while(1){
        cout<<"Enter your Choice: ";
        cin>>ch;
        cout<<endl;

        if(ch==1){
            cout<<"Enter the data of the first node that you are inserting: ";
            cin>>d;
            list1.InsertAtHead(d);
        }
        else if(ch==2){
            cout<<"Enter the data of the tail node that you are inserting: ";
            cin>>d;
            list1.InsertAtEnd(d);
        }
        else if(ch==3){
            int prev_val;
            cout<<"Enter the previous node value and the data of the node you are currently inserting: ";
            cin>>prev_val>>d;
            list1.InsertAtPosition(prev_val,d);
        }
        else if(ch==4){
            Node *y=new Node;
            cout<<"Enter the data you want to search: ";
            cin>>d;
            y=list1.searchList(d);
            if(y!=nullptr){
                cout<<"Node Found!!!    The data on that node is: "<<y->data<<endl;

            }
            else{
                cout<<"Node not Found!!"<<endl;
            }
        }
        else if(ch==5){
            list1.DeleteAtFirst();
        }
        else if(ch==6){
            list1.DeleteAtTail();
        }
        else if(ch==7){
            cout<<"Enter the data of the node that you want to delete: ";
            cin>>d;
            list1.DeleteAtPosition(d);
        }
        else if(ch==8){
            list1.print();
        }
        else if(ch==0){
            return 0;
        }
        else{
            cout<<"You did not choose the correct option!!!!\n";
        }
    }
    return 0;
}