#include <bits/stdc++.h>
using namespace std;

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
    // This is a recursive procedure
    // Two pointers to traverse each of the lists
    Node* temp1=head1;
    Node* temp2=head2;
    if(head1==NULL || head2==NULL) // This condition is met when either of the list is empty
        return NULL;// no intersecting element is found as either of the list is empty thus NULL is returned

    if(temp1->data<temp2->data)
        return findIntersection(temp1->next,temp2);

    if(temp1->data>temp2->data)
        return findIntersection(temp1,temp2->next);

    Node* temp=new Node(temp1->data);
    temp->next=findIntersection(temp1->next,temp2->next);
    return temp;
}