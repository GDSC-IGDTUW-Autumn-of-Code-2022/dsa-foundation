#include <iostream>
using namespace std;
//Linked List Node
class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

//Function to take input from user
Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

//Function to reverse linked list 
Node *reverseLinkedListRec(Node *head)
{

     //Base Case
	if(head==NULL || head->next==NULL){            
		return head;
	}

    //Reverse the rest list using recursion
	Node *smallans=reverseLinkedListRec(head->next);
	Node * temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}

	temp->next=head;
	head->next=NULL;
	return smallans;
    
}

//Function to print Linked List
void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

//Main function to test above functions
int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		Node *head = takeinput();
		head = reverseLinkedListRec(head);
		print(head);
	}

	return 0;
}