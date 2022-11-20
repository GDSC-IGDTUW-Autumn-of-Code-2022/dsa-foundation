# REVERSING A LINKED LIST USING ITERATIVE APPROACH IN C++

## Problem Statement:
Given a pointer to the head node of a linked list. Our goal is to reverse the linked list by changing the links between nodes.

## Approach:
In this method, we will traverse the linked list from its head to NULL changing the links between the nodes of the list.

## Step 1:
Declaring a class node.

```
class node {
public:
    int data;
    node* next;

    node(int d) {
        data = d;
        next = NULL;
    }
};
```

## Step 2: 
* Function for inserting elements into the linked list. 
* This function will add the element to the end of the list. 

```
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
```

## Step 3: 
Making a function to print the linked list.

```
void printLL(node* head){
    while(head){
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}
```

## Step 4: 
* Making a function to reverse the linked list.
* In this function, we will create 3 pointers - curr, prev and nxt.
* In the begining, the curr pointer will point towards the head of the linked list
* The prev and nxt pointer will keep track of the previous and next node of the curr respectively. 

```
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
```

## Example:
Head of following linked list
1 -> 2 -> 3 -> 4 -> NULL

* After first iteration : NULL <- 1  2 -> 3 -> 4 -> NULL
* After second iteration : NULL <- 1 <- 2  3 -> 4 -> NULL
* After third iteration : NULL <- 1 <- 2 <- 3  4 -> NULL
* After fourth iteration : NULL <- 1 <- 2 <- 3 <- 4

Output : 4 -> 3 -> 2 -> 1 -> NULL;

## Complexity
* Time complexity : As the linked list is travered once, TC = O(N)
* Here, N is the size of the linked list.
* Space complexity : The original linked list is modified and no extra space is used, hence SC = O(1)
