#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int d){
        data = d;
        next = NULL;
    }
};

// FUNCTION TO INSERT ELEMENTS AT THE END OF A LINKED LIST

void insertAtEnd(node* &head, int data){
    node* nnode = new node(data);
    if(!head){
        head = nnode;
    }
    else{
        node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = nnode;
    }
}

// FUNCTION TO PRINT LINKED LIST

void printLL(node* head){
    while(head){
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

//FUNCTION TO REVERSE LINKED LIST

void reverseLL(node* &head){
    node *curr = head;
    node *prev = NULL;
    node *nxt = NULL;
    while(curr){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    head = prev;
}

int main(){

    node *head = NULL;

    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);

    printLL(head);
    reverseLL(head);
    printLL(head);

    return 0;
}
