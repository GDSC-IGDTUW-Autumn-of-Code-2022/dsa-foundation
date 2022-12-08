
public class Node_removal_code {
	Node head; 
	class Node {
		int data;
		Node next;
		Node(int d){
			data = d;
			next = null;
		}
	}

	public void delLesserNodes(){
		reverseList();
		_delLesserNodes();
		reverseList();
	}

	public void _delLesserNodes(){
		Node current = head;
		Node maxnode = head;
		Node temp;

		while (current != null && current.next != null) {
			if (current.next.data < maxnode.data) {
				temp = current.next;
				current.next = temp.next;
				temp = null;
			}
			else {
				current = current.next;
				maxnode = current;
			}
		}
	}

	public void insert(int new_data){
		Node new_node = new Node(new_data);
		new_node.next = head;
		head = new_node;
	}

	public void reverseList(){
		Node current = head;
		Node prev = null;
		Node next;
		while (current != null) {
			next = current.next;
			current.next = prev;
			prev = current;
			current = next;
		}
		head = prev;
	}

	public void printList(){
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
        System.out.println();
    }

	public static void main(String args[]){
        Node_removal_code LL = new Node_removal_code();
        LL.insert(8);
        LL.insert(3);
        LL.insert(13);
        LL.insert(2);
        LL.insert(5);
  
        System.out.println("Entered Linked List");
        LL.printList();
  
        LL.delLesserNodes();
  
        System.out.println("Modified Linked List");
        LL.printList();
    }
}



