#include <bits/stdc++.h>
using namespace std;
// This is a two pointer approach
struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};
// To input a list
Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}
// function to print a list
void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}
// to find the intersecting elements
Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/
Node* findIntersection(Node* head1, Node* head2)
{
    // Two pointers to traverse each of the lists
    Node* temp1=head1;
    Node* temp2=head2;
    Node* resulthead=NULL; // list to store the result
    Node* temp3;
    if(head1==NULL || head2==NULL)// This condition is met when either of the list is empty
        return NULL;// no intersecting element is found as either of the list is empty thus NULL is returned
    
    while(temp1!=NULL && temp2!=NULL)
    {
    if(temp1->data == temp2->data)
    {
        // to make the resulting list head
        if(resulthead==NULL)
        {
            Node* newNode=new Node(temp1->data);
            newNode->next=NULL;
            resulthead=newNode;
            temp3=resulthead;
        }
        // if already node exists in the resulting list
        else
        {
            Node* newNode=new Node(temp1->data);
            newNode->next=NULL;
            temp3->next=newNode;
            temp3=newNode;
        }
        // to move to the next element of each of the two list for comparing the next element
        temp1=temp1->next;
        temp2=temp2->next;
        
    }
    // As the list is sorted greater elements will occur to the right
    // if value in the current node of list1 is less than list2 move to next element of list1
    else if(temp1->data<temp2->data)
    {
        temp1=temp1->next;
    }
    // if value in the current node of list1 is greater than list2 move to next element of list2
    else
    {
        temp2=temp2->next;
    }
    }
    return resulthead;
    
}