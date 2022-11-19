# Algorithm:

Reverse a Linked List  by Iterative Method :

Given a singly linked list of integers, reverse it iteratively and return the head to the modified list.

Given a pointer to the head node of a linked list, the task is to reverse the linked list. We need to reverse the list by changing the links between nodes.

## STEP 1:

Make a class of LinkedListNode which is of generic type and the object of LinkedListNode will contain T type of data and next pointer.

<!-- class LinkedListNode<T> {
	T data;
	LinkedListNode<T> next;
	
	public LinkedListNode(T data) {
		this.data = data;
	}
} -->


## STEP 2:

In Reverse_Linked_List class there is a function takeInput() which will take the Linked List input from the user .

<!-- public static LinkedListNode<Integer> takeInput() throws IOException {

        LinkedListNode<Integer> head = null, tail = null;
        StringTokenizer tk = new StringTokenizer(br.readLine());
		int data = Integer.parseInt(tk.nextToken());
		while(data != -1) {
			LinkedListNode<Integer> newNode = new LinkedListNode<Integer>(data);
			if(head == null) {
				head = newNode;
				tail = newNode;
			}
			else {
				tail.next = newNode;
				tail = newNode;
			}
			data = Integer.parseInt(tk.nextToken());
		}
		return head;
	} -->

## STEP 3:

The print function will print the Linked List from head to tail.
The loop will run until the head is null and we will print the data in the head and update it with next.

<!-- public static void print(LinkedListNode<Integer> head){
		while(head != null){
			System.out.print(head.data +" ");
			head = head.next;
		}
		System.out.println();
	} -->


## STEP 4:

The reverse function will reverse the Linked List from head to tail. 

The idea is to use three pointers currNode, prevNode and nextNode to keep the track of nodes to update reverse links.

Initialize three pointers prevNode as null , currNode as head, and nextNode as currNode next.

The loop will run until currNode is null.

Iterate through the linked list. In a loop, do the following:

Make the next pointer of currNode point to prevNode

Update prevNode with currNode and currNode with nextNode

prevNode=currNode
currNode=nextNode

And in last return prevNode which will be the head.

<!-- public static LinkedListNode<Integer> reverse_I(LinkedListNode<Integer> head){
        // Base case
        if(head==null || head.next==null){
            return head;
        }
        LinkedListNode<Integer> currNode = head;
        LinkedListNode<Integer> prevNode = null;
        while(currNode!=null){
            LinkedListNode<Integer> nextNode=currNode.next;
            currNode.next=prevNode;
            prevNode=currNode;
            currNode=nextNode;
        }
        return prevNode;
	} -->


In main function firstly we have call the takeInput() function to take the Linked List Input from the user.

Then we have a called the reverse function to reverse the Linked List from head to tail.

Then we have a call the print function to print the linked list from head to tail.


<!-- public static void main(String[] args) throws IOException{
        // Firstly take the Linked List input from the user
        LinkedListNode<Integer> head = takeInput();

        // call the reverse function to reverse the linked list from head to tail
        LinkedListNode<Integer> ans = reverse_I(head);

        // then call the print function to print the reverse linked list
        print(ans);
	} -->

The time complexity for Reverse Linked List function (reverse_I) is O(n).
The time complexity for print function print() is O(n).


Sample Input 1 :
1 2 3 4 5 6 7 8 -1

Sample Output 1 :
8 7 6 5 4 3 2 1


Sample Input 2 :
10 -1

Sample Output 2 :
10 


Sample Input 3 :
10 20 30 40 50 -1

Sample Output 3 :
50 40 30 20 10 