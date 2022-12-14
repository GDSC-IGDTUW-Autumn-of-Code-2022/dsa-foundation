# ALGORITHM
The Problem is to Recursively reverse a linked list which is an important problem of linked list data structure.

## Problem Statement
We are given N elements in a linked list ,and we are asked to reverse the elements of a linked list by using recursion.

# Approach
Now we will discuss the approach to reverse a linked list recursively.

## Step 1. 
Declare the Node class and write the function to insert a node at the tail so that our linked list becomes ready.

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

## Step 2. 
Write a function to take input from user.

## Step 3. 
Now to recursively reverse the linked list ,first write the base case condition i.e, if only one node or no node exists.

if(head==NULL || head->next==NULL){            
		return head;
	}

## Step 4. 
Then call the recursive function on the entire list except for the first node.

Node *smallans=reverseLinkedListRec(head->next);

## Step 5. 
Update the link on the first node.

temp->next=head;
	head->next=NULL;
	return smallans;

## Step 6. 
Print the updated list.

while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}

## Example
Input : Head of following linked list  
       1->2->3->4->NULL
Output : Linked list should be changed to,
       4->3->2->1->NULL

## Diagramatic Representation 
image.png

## Complexity Analysis
Time complexity : O(n)
In the worst case ,all elements are to be traversed once.
Space Complexity : O(n)
Due to the space consumed by the recursiv call .