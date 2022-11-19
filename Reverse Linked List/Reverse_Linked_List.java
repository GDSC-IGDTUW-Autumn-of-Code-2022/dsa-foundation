// Java Program for reversing the Linked List
// import all the required functions

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;


// Generic Class of LinkedList which contain T type of Data and there is the next of Linked List
class LinkedListNode<T> {
	T data;
	LinkedListNode<T> next;
	
	public LinkedListNode(T data) {
		this.data = data;
	}
}

// Class name is Reverse_Linked_List
public class Reverse_Linked_List {
	
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	
    // Funcion to take Linked List input from the user

	public static LinkedListNode<Integer> takeInput() throws IOException {

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
	}
	
    // Function to print the Linked List from head to tail 

	public static void print(LinkedListNode<Integer> head){
		while(head != null){
			System.out.print(head.data +" ");
			head = head.next;
		}
		System.out.println();
	}
	
    // Function to reverse the Linked List by using iteration

    public static LinkedListNode<Integer> reverse_I(LinkedListNode<Integer> head){
        
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
	}

    // it is a main function
	public static void main(String[] args) throws IOException{
        // Firstly take the Linked List input from the user
        LinkedListNode<Integer> head = takeInput();

        // call the reverse function to reverse the linked list from head to tail
        LinkedListNode<Integer> ans = reverse_I(head);

        // then call the print function to print the reverse linked list
        print(ans);
	}
}
